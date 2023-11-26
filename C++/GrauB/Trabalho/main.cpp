#include <iostream>
#include <string>
#include <sstream>
#include <fstream> 
#include <vector>
#include <map>
#include <algorithm>
#include <iomanip>

using namespace std;

class Data 
{
private:
    int dia, mes, ano;

public:
    Data(const string data)
    {
        char separador;
        stringstream ss(data);
        ss >> this->ano >> separador >> this->mes >> separador >> this->dia;
    }

    int compare(Data date)  
    {
        if (this->ano < date.ano) 
            return -1;
        if (this->ano > date.ano) 
            return 1;
        
        if (this->mes < date.mes) 
            return -1;
        if (this->mes > date.mes) 
            return 1;
        
        if (this->dia < date.dia) 
            return -1;
        if (this->dia > date.dia) 
            return 1;

        return 0;
    }

    bool validarData()
    {
        return this->dia < 1 || this->dia > 31 || 
               this->mes < 1 || this->mes > 12 || 
               this->ano < 1500 || this->ano > 2024;
    }

    string toString() 
    {
        return formatarNumero(this->dia) + "/" + formatarNumero(this->mes) + "/" + formatarNumero(this->ano);
    }

private:
    string formatarNumero(int numero)
    {
        return (numero < 10) ? "0" + to_string(numero) : to_string(numero);
    }
};

class Registro 
{
private:
    int idCVE, idCWE;
    Data* publishDate;
    Data* updateDate;
    float scoreCVSS;
    string vulnerabilityTypes;
    string gainedAccessLevel;
    string access;
    string complexity;
    string authentication;
    string confidentialy;
    string integrity;
    string availability;
    string description;

public:
    Registro(string linha)
    {
        stringstream ss(linha);
        string auxiliar;

        for (int i = 0; i < 2; i++) 
            getline(ss, auxiliar, '-');

        ss >> this->idCVE;
        getline(ss, auxiliar, '\t');
        
        if (isdigit(ss.peek())) 
            ss >> this->idCWE;

        getline(ss, auxiliar, '\t');
        getline(ss, this->vulnerabilityTypes, '\t');
        getline(ss, auxiliar, '\t');
        this->publishDate = new Data(auxiliar);
        getline(ss, auxiliar, '\t');
        this->updateDate = new Data(auxiliar);
        ss >> this->scoreCVSS;
        getline(ss, auxiliar, '\t');
        getline(ss, this->gainedAccessLevel, '\t');
        getline(ss, this->access, '\t');
        getline(ss, this->complexity, '\t');
        getline(ss, this->authentication, '\t');
        getline(ss, this->confidentialy, '\t');
        getline(ss, this->integrity, '\t');
        getline(ss, this->availability, '\t');
        getline(ss, this->description, '\t');
    }

    ~Registro()
    {
        delete this->publishDate;
        delete this->updateDate;
    }

    int getIdCVE() { return this->idCVE; }
    int getIdCWE() { return this->idCWE; }
    float getScore() { return this->scoreCVSS; }
    Data* getPublishDate() { return this->publishDate; }

    bool hasSubstringInDescription(string substring) 
    { 
        transform(this->description.begin(), this->description.end(), this->description.begin(), ::tolower);
        transform(substring.begin(), substring.end(), substring.begin(), ::tolower);

        return this->description.find(substring) != string::npos;
    }

    void imprimir() 
    {
        cout << "ID CVE: " << this->idCVE << endl;
        cout << "ID CWE: " << this->idCWE << endl;
        cout << "Score CVSS: " << this->scoreCVSS << endl;
        cout << "Vulnerability Types: " << this->vulnerabilityTypes << endl;
        cout << "Publish Date: " << this->publishDate->toString() << endl;
        cout << "Update Date: " << this->updateDate->toString() << endl;
        cout << "Gained Access Level: " << this->gainedAccessLevel << endl;
        cout << "Access: " << this->access << endl;
        cout << "Complexity: " << this->complexity << endl;
        cout << "Authentication: " << this->authentication << endl;
        cout << "Confidentiality: " << this->confidentialy << endl;
        cout << "Integrity: " << this->integrity << endl;
        cout << "Availability: " << this->availability << endl;
        cout << "Description: " << this->description << endl << endl;
    }

    void imprimirPorDescription() 
    {
        cout << "ID CVE: " << this->idCVE << "\t";
        cout << "Score CVSS: " << this->scoreCVSS << "\t";
        cout << "Publish Date: " << this->publishDate->toString() << " ";
        cout << "Update Date: " << this->updateDate->toString() << " ";
        cout << endl;
    }

    void serialize(ofstream& arquivo)
    {
        arquivo 
           << this->idCVE << '\t'
           << this->idCWE << '\t'
           << this->vulnerabilityTypes << '\t'
           << this->publishDate->toString() << '\t'
           << this->updateDate->toString() << '\t'
           << this->scoreCVSS << '\t'
           << this->gainedAccessLevel << '\t'
           << this->access << '\t'
           << this->complexity << '\t'
           << this->authentication << '\t'
           << this->confidentialy << '\t'
           << this->integrity << '\t'
           << this->availability << '\t'
           << this->description << endl;
    }
};

class Sistema 
{
private:
    vector<Registro*> dados;
    vector<Registro*> dadosExportados;
    string primeiraLinha;

public:
    Sistema(const string& nomeArquivo)
    {
        string linha;
        ifstream arquivo(nomeArquivo);

        if (arquivo.is_open()) 
        {
            getline(arquivo, primeiraLinha);

            while(!arquivo.eof())
            {
                getline(arquivo, linha);
                dados.push_back(new Registro(linha));
            }

            arquivo.close();
        } else {
            cout << "Não foi possível abrir o arquivo para leitura.\n";
        }
    }

    ~Sistema()
    {
        for (Registro* registro : dados) 
            delete registro;
    }

    void localizarPorCveId(int cveId)
    {
        for (Registro* registro : dados)
            if (registro->getIdCVE() == cveId)
            {
                registro->imprimir();  
                return;
            }  
        
        cout << "Não foi possivel encontrar o registro com o CVE ID: " << cveId << endl;
    }

    void localizarPorDescription(string substring)
    {
        bool teveRegistro = false;
        for (Registro* registro : dados)
            if (registro->hasSubstringInDescription(substring))
            {
                registro->imprimirPorDescription(); 
                teveRegistro = true;
            }

        if (!teveRegistro)  
            cout << "Não foi possivel encontrar algum registro com essa parte de descrição: " << substring << endl;
    }

    void gerarHistogramaCweId(int contagemMinima, int contagemMaxima)
    {
        if (contagemMinima > contagemMaxima)
        {
            cout << "\nA contagem máxima deve ser maior ou igual a contagem mínima.\n";
            return;
        } 

        map<int, int> contagem;
        for (Registro* registro : dados) 
            contagem[registro->getIdCWE()]++;

        vector<pair<int, int>> codigosFiltrados;
        for (auto par : contagem) 
            if (par.second >= contagemMinima && par.second <= contagemMaxima) 
                codigosFiltrados.push_back(par);

        sort(codigosFiltrados.begin(), codigosFiltrados.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

        cout << "\nHistograma \"CWE ID\":\n";
        cout << setw(10) << left << "CWE ID";
        cout << setw(8) << " Qtd" << "\n";
        for (auto par : codigosFiltrados) 
        {
            int quantidade = par.second;
            double percentual = (static_cast<double>(quantidade) / dados.size()) * 100;

            cout << setw(8) << left << par.first << " | ";
            cout << setw(8) << quantidade << " | ";
            cout << string(quantidade, '*') << "  (" << fixed << setprecision(2) << percentual << "%)\n";
        }
    }

    void gerarHistogramaScore() 
    {
        map<int, int> contagem;

        for (Registro* registro : dados) 
        {
            float score = registro->getScore();
            int grupo = static_cast<int>(score);

            if (grupo == 10)
                grupo = 9;

            contagem[grupo]++;  
        }

        cout << "\nHistograma \"Score\":\n\n";
        cout << setw(6) << "  Score";
        cout << setw(12) << " Qtd" << "\n";
        for (auto par : contagem) 
        {
            double scoreInicial = par.first;
            double scoreFinal = scoreInicial + 0.9;
            if (scoreFinal == 9.9)
                scoreFinal = 10;

            int quantidade = par.second;
            double percentual = (static_cast<double>(quantidade) / dados.size()) * 100;

            cout << fixed << setprecision(1) << scoreInicial << " - " << scoreFinal << " | ";
            cout << quantidade << " (" << fixed << setprecision(2) << percentual << "%) | ";
            cout << string(quantidade, '*') << "\n";
        }
    }
    
    void exportarDados(Data* dataInicial, Data* dataFinal, float filtroInicial, float filtroFinal, string path)
    {
        string nomeArquivo;
        cout << "Digite o nome do arquivo para salvar os registros: ";
        cin.ignore();
        getline(cin, nomeArquivo);

        ofstream arquivo(path + nomeArquivo);

        if (arquivo.is_open()) 
        {
            arquivo << primeiraLinha << endl;
            for (Registro* registro : dados)
            {
                float score = registro->getScore();
                Data* publishDate = registro->getPublishDate();
                bool filterDate = (publishDate->compare(*dataInicial) >= 0) && (publishDate->compare(*dataFinal) <= 0);

                if (score >= filtroInicial && score <= filtroFinal && filterDate)
                    registro->serialize(arquivo);  
            }
            arquivo.close();
            cout << "Registros salvos no arquivo '" << nomeArquivo << "'.\n";
        } else 
            cout << "Não foi possível abrir o arquivo para escrita.\n";
    }
};

int main()
{
    const string constPath = "C/C++/GrauB/Trabalho/";
    const string relativePath = "C:/Users/Mark/Desktop/";
    const string fileName = "cve2018.txt";

    int opcao, cveId, contagemMinima, contagemMaxima;
    float filtroInicial, filtroFinal;
    Data* dataInicial;
    Data* dataFinal;
    string subdescription, auxiliar;

    Sistema sistema(relativePath + constPath + fileName);

    do
    {
        cout << "\n::MENU CVE::\n\n";
        cout << "1 - Localizar por CVE ID\n";
        cout << "2 - Localizar por Description\n";
        cout << "3 - Histograma CWE ID\n";
        cout << "4 - Histograma Score\n";
        cout << "5 - Exportar dados\n";
        cout << "6 - Sair\n";

        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cin.ignore();
            cout << endl << "Escreva um CVE ID: ";
            cin >> cveId;
            cout << endl;
            sistema.localizarPorCveId(cveId);
            break;
        case 2:
            cin.ignore();
            cout << endl << "Escreva alguma palavra ou frase de uma descrição: ";
            getline(cin, subdescription);
            cout << endl;
            sistema.localizarPorDescription(subdescription);
            break;
        case 3:
            cin.ignore();
            cout << endl << "Escreva a contagem mínima: ";
            cin >> contagemMinima;
            cin.ignore();
            cout << "Escreva a contagem máxima: ";
            cin >> contagemMaxima;
            sistema.gerarHistogramaCweId(contagemMinima, contagemMaxima);
            break;
        case 4:
            sistema.gerarHistogramaScore();
            break;
        case 5:
            cin.ignore();
            bool hasDates, hasScores;
            
            do
            {
                cout << endl << "Escreva o intervalo mínimo de data (ex: 2018/01/25): ";
                getline(cin, auxiliar);
                dataInicial = new Data(auxiliar);

                if (dataInicial->validarData())
                {
                    cout << "\nData inválida, digite novamente.\n";
                    continue;
                }

                cout << endl << "Escreva o intervalo máximo de data (ex: 2018/02/25): ";
                getline(cin, auxiliar);
                dataFinal = new Data(auxiliar);

                if (dataFinal->validarData())
                {
                    cout << "\nData inválida, digite novamente.\n";
                    continue;
                }
                    
                if (dataFinal->compare(*dataInicial) == -1)
                {
                    cout << "\nData final menor que data inicial, digite novamente.\n";
                    continue;
                }   

                hasDates = true;
            } while (!hasDates);

            do
            {
                cout << endl << "Escreva o filtro inicial de CVSS Score: ";
                cin >> filtroInicial;

                cout << endl << "Escreva o filtro final de CVSS Score: ";
                cin >> filtroFinal;

                if (filtroFinal < filtroInicial)
                {
                    cout << "\nFiltro final menor que filtro inicial, tente novamente.\n";
                    continue;
                }   

                hasScores = true;
            } while (!hasScores);

            sistema.exportarDados(dataInicial, dataFinal, filtroInicial, filtroFinal, relativePath + constPath);
            delete dataInicial, dataFinal;
            break;
        case 6:
            cout << "\nPrograma encerrado.\n";
            break;
        default:
            cout << "\nOpção inválida, insira novamente!\n";
            break;
        }
    } while (opcao != 6);

    return 0;
};

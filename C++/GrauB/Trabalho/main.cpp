#include <iostream>
#include <string>
#include <sstream>
#include <fstream> 
#include <vector>

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

    string imprimir() 
    {
        return to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano);
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

    int getidCVE() { return this->idCVE; }
    int getidCWE() { return this->idCWE; }
    float getScore() { return this->scoreCVSS; }
    string getDescription() { return this->description; }

    void imprimir() const {
        cout << "ID CVE: " << this->idCVE << endl;
        cout << "ID CWE: " << this->idCWE << endl;
        cout << "Score CVSS: " << this->scoreCVSS << endl;
        cout << "Vulnerability Types: " << this->vulnerabilityTypes << endl;
        cout << "Publish Date: " << this->publishDate->imprimir() << endl;
        cout << "Update Date: " << this->updateDate->imprimir() << endl;
        cout << "Gained Access Level: " << this->gainedAccessLevel << endl;
        cout << "Access: " << this->access << endl;
        cout << "Complexity: " << this->complexity << endl;
        cout << "Authentication: " << this->authentication << endl;
        cout << "Confidentiality: " << this->confidentialy << endl;
        cout << "Integrity: " << this->integrity << endl;
        cout << "Availability: " << this->availability << endl;
        cout << "Description: " << this->description << endl << endl;
    }
};

class Sistema 
{
private:
    vector<Registro*> dados;

public:
    Sistema(const string& nomeArquivo)
    {
        string linha;
        ifstream arquivo(nomeArquivo);

        if (arquivo.is_open()) 
        {
            getline(arquivo, linha);

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
            if (registro->getidCVE() == cveId)
            {
                registro->imprimir();  
                return;
            }  
        
        cout << "Não foi possivel encontrar o registro com o CVE ID " << cveId << endl;
    }
};


// MENU
int main()
{
    int opcao, cveId = 0;
    const string constPath = "/C/C++/GrauB/Trabalho/cve2018.txt";
    const string relativePath = "C:/Users/Mark/Desktop";

    Sistema sistema(relativePath + constPath);

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
            cout << endl << "Escreva um CVE ID: ";
            cin >> cveId;
            cout << endl;
            sistema.localizarPorCveId(cveId);
            break;
        case 2:
            // localizarPorDescription();
            break;
        case 3:
            // gerarHistogramaCweId();
            break;
        case 4:
            // gerarHistogramaScore();
            break;
        case 5:
            // exportarDados();
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

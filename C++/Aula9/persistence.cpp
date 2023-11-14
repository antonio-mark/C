// • Elabore um diagrama de classes simplificado conforme descrição abaixo

// • Defina a classe “Veiculo” com os atributos código, fabricante, modelo, ano, cor,
// motor (1.0, 1.6, 2.0, etc) e preço. Implemente uma função de serialização e outra
// de deserialização usando <tab> como separador dos dados

// • Crie uma classe “Revenda” com um atributo privado do tipo vector de ponteiros
// para veículos e demais métodos para manipulação dos dados

// • Faça um programa com o seguinte menu:
// 1. Cadastrar: pede todos os dados do veículo e cria um objeto
// 2. Listar: mostra todos os veículos de um modelo específico
// 3. Remover: remove do vector o veículo com um código específico
// 4. Salvar: varre o vector e salva todos os veículos em um arquivo
// 5. Carregar: limpa o vector e instancia um veículo para cada linha do arquivo

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

class Veiculo {
private:
    int codigo;
    string fabricante;
    string modelo;
    int ano;
    string cor;
    double motor;
    double preco;

public:
    Veiculo(int codigo, string fabricante, string modelo, int ano, string cor, double motor, double preco)
        : codigo(codigo), fabricante(fabricante), modelo(modelo), ano(ano), cor(cor), motor(motor), preco(preco) {}

    int getCodigo() const { return codigo; }
    string getModelo() const { return modelo; }
    string getFabricante() const { return fabricante; }
    string getCor() const { return cor; }
    double getPreco() const { return preco; }

    void serializar(ostream& output) const {
        output << codigo << '\t' << fabricante << '\t' << modelo << '\t' << ano << '\t' << cor << '\t' << motor << '\t' << preco << '\n';
    }

    static Veiculo deserializar(const string& linha) {
        int codigo, ano;
        double motor, preco;
        string fabricante, modelo, cor;
        istringstream ss(linha);
        ss >> codigo >> fabricante >> modelo >> ano >> cor >> motor >> preco;
        return Veiculo(codigo, fabricante, modelo, ano, cor, motor, preco);
    }
};

class Revenda {
private:
    vector<Veiculo*> veiculos;

public:
    ~Revenda() {
        for (Veiculo* veiculo : veiculos) {
            delete veiculo;
        }
    }

    void cadastrarVeiculo() {
        int codigo, ano;
        double motor, preco;
        string fabricante, modelo, cor;

        cout << "Código: ";
        cin >> codigo;
        cin.ignore(); // Limpa o buffer

        cout << "Fabricante: ";
        getline(cin, fabricante);

        cout << "Modelo: ";
        getline(cin, modelo);

        cout << "Ano: ";
        cin >> ano;

        cin.ignore(); // Limpa o buffer

        cout << "Cor: ";
        getline(cin, cor);

        cout << "Motor: ";
        cin >> motor;

        cout << "Preço: ";
        cin >> preco;

        Veiculo* veiculo = new Veiculo(codigo, fabricante, modelo, ano, cor, motor, preco);
        veiculos.push_back(veiculo);
    }

    void listarVeiculosPorModelo(const string& modelo) {
        cout << "Veículos do modelo " << modelo << ":\n";
        for (Veiculo* veiculo : veiculos) {
            if (veiculo->getModelo() == modelo) {
                cout << "Código: " << veiculo->getCodigo() << " - Ano: " << veiculo->getModelo()
                 << " - Fabricante: " << veiculo->getFabricante() << " - Cor: " << veiculo->getCor()
                 << " - Preço: " << veiculo->getPreco() << "\n";
            }
        }
    }

    void removerVeiculoPorCodigo(int codigo) {
        for (size_t i = 0; i < veiculos.size(); i++) {
            if (veiculos[i]->getCodigo() == codigo) {
                delete veiculos[i];
                veiculos.erase(veiculos.begin() + i);
                cout << "Veículo removido com sucesso.\n";
                return;
            }
        }
        cout << "Veículo não encontrado.\n";
    }

    void salvarVeiculosEmArquivo(const string& nomeArquivo) {
        ofstream arquivo(nomeArquivo);
        if (arquivo.is_open()) {
            for (Veiculo* veiculo : veiculos) {
                veiculo->serializar(arquivo);
            }
            arquivo.close();
            cout << "Veículos salvos no arquivo '" << nomeArquivo << "'.\n";
        } else {
            cout << "Não foi possível abrir o arquivo para escrita.\n";
        }
    }

    void carregarVeiculosDeArquivo(const string& nomeArquivo) {
        for (Veiculo* veiculo : veiculos) {
            delete veiculo;
        }
        veiculos.clear();

        ifstream arquivo(nomeArquivo);
        if (arquivo.is_open()) {
            string linha;
            while (getline(arquivo, linha)) {
                Veiculo veiculo = Veiculo::deserializar(linha);
                veiculos.push_back(new Veiculo(veiculo));
            }
            arquivo.close();
            cout << "Veículos carregados do arquivo '" << nomeArquivo << "'.\n";
        } else {
            cout << "Não foi possível abrir o arquivo para leitura.\n";
        }
    }
};

int main() {
    Revenda revenda;
    string modelo, nomeArquivoSalvar, nomeArquivoCarregar;

    int escolha;
    do {
        cout << "Menu:\n";
        cout << "1. Cadastrar Veículo\n";
        cout << "2. Listar Veículos por Modelo\n";
        cout << "3. Remover Veículo por Código\n";
        cout << "4. Salvar Veículos em Arquivo\n";
        cout << "5. Carregar Veículos de Arquivo\n";
        cout << "6. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                revenda.cadastrarVeiculo();
                break;
            case 2:
                cout << "Digite o modelo: ";
                cin.ignore(); // Limpa o buffer
                getline(cin, modelo);
                revenda.listarVeiculosPorModelo(modelo);
                break;
            case 3:
                int codigo;
                cout << "Digite o código do veículo a ser removido: ";
                cin >> codigo;
                revenda.removerVeiculoPorCodigo(codigo);
                break;
            case 4:
                cout << "Digite o nome do arquivo para salvar os veículos: ";
                cin.ignore(); // Limpa o buffer
                getline(cin, nomeArquivoSalvar);
                revenda.salvarVeiculosEmArquivo(nomeArquivoSalvar);
                break;
            case 5:
                cout << "Digite o nome do arquivo para carregar os veículos: ";
                cin.ignore(); // Limpa o buffer
                getline(cin, nomeArquivoCarregar);
                revenda.carregarVeiculosDeArquivo(nomeArquivoCarregar);
                break;
        }
    } while (escolha != 6);

    return 0;
}

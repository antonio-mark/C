#include <iostream>
#include <fstream>

using namespace std;

class Veiculo {
private:
    string fabricante, modelo;
    int ano;
    int tanque;
    float consumo;
    
public:
    Veiculo(string nomeArquivo)
    {
        char separador;
        ifstream arquivo(nomeArquivo);
        if (arquivo.is_open()) {
            getline(arquivo, this->fabricante, '\n');
            getline(arquivo, this->modelo, '\n');
            arquivo >> 
            this->ano >> separador >> 
            this->tanque >> separador >> 
            this->consumo;
            arquivo.close();
        } else {
            cout << "Não foi possível abrir o arquivo para leitura." << endl;
        }
    }

    float autonomia() { return this->tanque * this->consumo; }

    void imprimeDados()
    {
        cout << "Fabricante: " << this->fabricante << "\n"
             << "Modelo: " << this->modelo << "\n"
             << "Ano: " << this->ano << "\n"
             << "Tanque: " << this->tanque << "\n"
             << "Consumo: " << this->consumo << "\n"
             << "Autonomia: " << autonomia() << "\n";
    }
};

int main()
{
    Veiculo* veiculo = new Veiculo("C:/Users/antonioneto3/Desktop/C/C++/GrauB/Prova/veiculo.txt");

    veiculo->imprimeDados();

    delete veiculo;

    return 0;
}
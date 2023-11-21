#include <iostream>

using namespace std;

class Multa
{
private:
    string categoria;
    float valor, excesso;
    int pontos, velocidadeMaxima, velocidadeVeiculo;
public:
    Multa(int velocidadeMaxima, int velocidadeVeiculo)
    {
        this->velocidadeMaxima = velocidadeMaxima;
        this->velocidadeVeiculo = velocidadeVeiculo;
    }

    void imprimeMulta()
    {
        this->categoria = "Nenhuma";
        this->excesso = 0.0;
        this->valor = 0.0;
        this->pontos = 0; 

        float percentualExcesso = (static_cast<float>(velocidadeVeiculo) - static_cast<float>(velocidadeMaxima)) / static_cast<float>(100);

        if (percentualExcesso < 0.2)
        {
            this->categoria = "Média";
            this->excesso = percentualExcesso;
            this->valor = 130.16;
            this->pontos = 4; 
        }

        if (percentualExcesso >= 0.2 && percentualExcesso < 0.5)
        {
            this->categoria = "Grave";
            this->excesso = percentualExcesso;
            this->valor = 195.23;
            this->pontos = 5; 
        }

        if (percentualExcesso >= 0.5)
        {
            this->categoria = "Gravíssima";
            this->excesso = percentualExcesso;
            this->valor = 880.41;
            this->pontos = 7; 
        }
    
        cout << "Velocidade do veículo: " << this->velocidadeVeiculo << endl
             << "Velocidade máxima permitida: " << this->velocidadeMaxima << endl
             << "Percentual de excesso de velocidade: " << this->excesso * 100 << "%" << endl
             << "Categoria da multa: " << this->categoria << endl  
             << "Valor da multa: " << this->valor << endl 
             << "Pontos na carteira: " << this->pontos << endl;
    }
};


int main()
{
    Multa* multa = new Multa(100, 120);

    multa->imprimeMulta();

    delete multa;
 
    return 0;
}
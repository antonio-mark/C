// Crie a classe “Cor” com as seguintes definições:
// – Atributos R, G e B, que aceitam números inteiros entre 0 e 255
// – Métodos de acesso Getter e Setter dos atributos, gerando mensagem de
// valores fora da faixa
// – Método construtor padrão, inicializando os atributos com o valor 0
// – Método construtor sobrecarregado, que recebe e armazena os 3 atributos
// aplicando as restrições
// – Método getCorHex(), que retorna uma string no formato RGB hexadecimal
// (#RRGGBB)
// – Para testar a classe, instancie um objeto “Cor”, defina valores para os
// atributos e imprima na tela o código hexadecimal da cor
// – Faça testes com cores inválidas

#include <iostream>
#include <iomanip> 

using namespace std;

class Cor
{
    int R, G, B;
public:
    Cor()
    {
        this->R = 0;
        this->G = 0;
        this->B = 0;
    }

    Cor(int R, int G, int B)
    {
        this->setR(R);
        this->setG(G);
        this->setB(B);
    }

    void setR(int R)
    {
        if (R >= 0 && R <= 255)
            this->R = R;
        else
            cout << "o valor de R deve estar entre 0 e 255!" << endl;
    }

    void setG(int G)
    {
        if (G >= 0 && G <= 255)
            this->G = G;
        else
            cout << "o valor de G deve estar entre 0 e 255!" << endl;
    }

    void setB(int B)
    {
        if (B >= 0 && B <= 255)
            this->B = B;
        else
            cout << "o valor de B deve estar entre 0 e 255!" << endl;
    }

    int getR()
    {
        return this->R;
    }

    int getG()
    {
        return this->G;
    }

    int getB()
    {
        return this->B;
    }

    string getCorHex()
    {
        stringstream ss;
        ss << "#" << hex << getR() << getG() << getB();
        return ss.str();
    }
};

int main()
{
    Cor cor;

    cout << "Cor em hex: " << cor.getCorHex() << endl;

    Cor cor2 = Cor(256, 1, -1);

    cout << cor2.getG() << endl;

    Cor cor3 = Cor(255, 255, 255);

    cout << "Cor em hex: " << cor3.getCorHex() << endl;
}
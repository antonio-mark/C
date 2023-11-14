// 1. Crie um programa que solicite ao usuário o seu nome completo (string), sexo
// (M/F) (char), idade (int), altura (float) e peso (float). Salve cada uma dessas
// informações em linhas separadas de um arquivo texto;

#include <fstream>
#include <iostream>
using namespace std;

int main ()
{
    string nome;
    char genero;
    int idade;
    float altura, peso;

    fstream fs("C:/Users/Mark/Desktop/C/C++/Aula9/arq.txt", fstream::out);
    if(fs.is_open())
    {
        cout << "Digite seu nome: ";
        getline(cin, nome);
        fs << "Nome: " << nome << endl;

        cout << "Digite seu genero: ";
        cin >> genero;
        fs << "Genero: " << genero << endl;

        cout << "Digite sua idade: ";
        cin >> idade;
        fs << "Idade: " << idade << endl;

        cout << "Digite sua altura: ";
        cin >> altura;
        fs << "Altura: " << altura << endl;

        cout << "Digite seu peso: ";
        cin >> peso;
        fs << "Peso: " << peso;

        fs.close();
    }
    else
        cout << "Erro\n";

    fs.close();
    return 0;
}

// 2. Crie um programa que leia o arquivo criado anteriormente e mostre os dados na
// tela, identificando o nome e valor de cada informação. Ex: Nome: <nome> \n Sexo: M/F \n, etc;

#include <fstream>
#include <iostream>
using namespace std;

int main ()
{
    string str;

    fstream fs("C:/Users/Mark/Desktop/C/C++/Aula9/arq.txt", fstream::in);
    if(fs.is_open())
    {
        while(!fs.eof())
        {
            getline(fs, str);
            cout << str << '\n';
        }
    }
    else
        cout << "Erro\n";

    fs.close();
    return 0;
}

// 3. Crie a classe “Pessoa” com os atributos da atividade 1. Além dos métodos getter
// e setter de cada atributo, crie o método “visualizar()”, que deverá mostrar na tela os nomes e valores 
// dos atributos no mesmo formato da atividade 2. Instancie uma pessoa, defina seus atributos e visualize;

#include <iostream>
#include <string>
using namespace std;

class Pessoa {
private:
    string nome;
    char genero;
    int idade;
    float altura, peso;

public:
    Pessoa(string nome, char genero, int idade, float altura, float peso) 
    {
        this->nome = nome;
        this->genero = genero;
        this->idade = idade;
        this->altura = altura;
        this->peso = peso;
    }

    string getNome() const { return this->nome; }
    void setNome(string nome) { this->nome = nome; }

    char getGenero() const { return this->genero; }
    void setGenero(char genero) { this->genero = genero; }

    int getIdade() const { return this->idade; }
    void setIdade(int idade) { this->idade = idade; }

    float getAltura() const { return this->altura; }
    void setAltura(float altura) { this->altura = altura; }

    float getPeso() const { return this->peso; }
    void setPeso(float peso) { this->peso = peso; }

    void visualizar() {
        cout << "Nome: " << this->nome << endl;
        cout << "Sexo: " << this->genero << endl;
        cout << "Idade: " << this->idade << endl;
        cout << "Altura: " << this->altura << " metros" << endl;
        cout << "Peso: " << this->peso << " kg" << endl;
    }
};

int main() {
    Pessoa pessoa("João Silva", 'M', 30, 1.75, 70.5);
    pessoa.visualizar();
    return 0;
}

// 4. Altere o programa da atividade 3 adicionando os métodos “carregar(string
// nomeArquivo)” e “salvar(string nomeArquivo)”. Instancie uma pessoa, carregue seus atributos
// a partir de um arquivo e visualize. Depois, altere o valor de alguns atributos e salve;

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Pessoa2 {
private:
    string nome;
    char genero;
    int idade;
    float altura, peso;

public:
    Pessoa2(string nome, char genero, int idade, float altura, float peso) 
    {
        this->nome = nome;
        this->genero = genero;
        this->idade = idade;
        this->altura = altura;
        this->peso = peso;
    }

    string getNome() const { return this->nome; }
    void setNome(string nome) { this->nome = nome; }

    char getGenero() const { return this->genero; }
    void setGenero(char genero) { this->genero = genero; }

    int getIdade() const { return this->idade; }
    void setIdade(int idade) { this->idade = idade; }

    float getAltura() const { return this->altura; }
    void setAltura(float altura) { this->altura = altura; }

    float getPeso() const { return this->peso; }
    void setPeso(float peso) { this->peso = peso; }

    void visualizar() {
        cout << "Nome: " << this->nome << endl;
        cout << "Sexo: " << this->genero << endl;
        cout << "Idade: " << this->idade << endl;
        cout << "Altura: " << this->altura << " metros" << endl;
        cout << "Peso: " << this->peso << " kg" << endl;
    }

    void carregar(string nomeArquivo) {
        char separador;
        ifstream arquivo(nomeArquivo);
        if (arquivo.is_open()) {
            getline(arquivo, this->nome, ';');
            arquivo >> 
            this->genero >> separador >> 
            this->idade >> separador >> 
            this->altura >> separador >>  
            this->peso;
            arquivo.close();
        } else {
            cout << "Não foi possível abrir o arquivo para leitura." << endl;
        }
    }

    void salvar(string nomeArquivo) {
        ofstream arquivo(nomeArquivo);
        if (arquivo.is_open()) {
            arquivo << 
            this->nome << ";" << 
            this->genero << ";" << 
            this->idade << ";" << 
            this->altura << ";" << 
            this->peso;
            arquivo.close();
        } else {
            cout << "Não foi possível abrir o arquivo para escrita." << endl;
        }
    }
};

int main() {
    Pessoa2 pessoa("Joãozinho", 'M', 30, 1.75, 70.5);
    
    pessoa.carregar("C:/Users/Mark/Desktop/C/C++/Aula9/arq.txt");

    pessoa.visualizar();

    pessoa.setNome("Maria s");
    pessoa.setIdade(25);

    pessoa.salvar("C:/Users/Mark/Desktop/C/C++/Aula9/arq.txt");

    return 0;
}

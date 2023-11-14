//////////////
// Gravacao //
//////////////

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

class Pessoa
{
private:
    string nome;
    char sexo;
    int idade;
    float altura;
public:
    Pessoa(string nome, char sexo, int idade, float altura)
    {
        this->nome = nome;
        this->sexo = sexo;
        this->idade = idade;
        this->altura = altura;
    }

    string serializar()
    {
        stringstream ss;
        ss << this->nome << ';'
           << this->sexo << ';'
           << this->idade << ';'
           << this->altura;
        return ss.str();
    }
};

int main()
{
    vector<Pessoa*> familia;
    vector<Pessoa*>::iterator it;

    familia.push_back(new Pessoa("Pedro", 'M', 42, 1.76));
    familia.push_back(new Pessoa("Maria", 'F', 39, 1.63));
    familia.push_back(new Pessoa("Roberto", 'M', 11, 1.49));

    fstream fs("familia.txt", iostream::out | iostream::trunc);
    if(fs.is_open())
    {
        fs << "nome;sexo;idade;altura";
        for(it = familia.begin(); it != familia.end(); it++)
            fs << endl << (*it)->serializar();
        fs.close();
        cout << familia.size() << " pessoas adicionadas ao arquivo" << endl;
    }

    return 0;
}

/////////////
// Leitura //
/////////////
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

class Pessoa2
{
private:
    string nome;
    char sexo;
    int idade;
    float altura;
public:
    Pessoa2(string linha)
    {
        char separador;
        stringstream ss(linha);
        getline(ss, this->nome, ';');
        ss >> this->sexo;
        ss >> separador;
        ss >> this->idade;
        ss >> separador;
        ss >> this->altura;
    }

    void imprimir()
    {
        cout << "Nome:\t" << this->nome << endl
             << "Sexo:\t" << this->sexo << endl
             << "Idade:\t" << this->idade << endl
             << "Altura:\t" << this->altura << endl << endl;
    }
};

int main()
{
    string linha;
    vector<Pessoa2*> familia;
    vector<Pessoa2*>::iterator it;

    fstream fs("familia.txt", iostream::in);
    if(fs.is_open())
    {
        getline(fs, linha);
        while(!fs.eof())
        {
            getline(fs, linha);
            familia.push_back(new Pessoa2(linha));
        }
        fs.close();

        cout << familia.size() << " pessoas lidas do arquivo" << endl << endl;

        for(it = familia.begin(); it != familia.end(); it++)
            (*it)->imprimir();
    }

    return 0;
}
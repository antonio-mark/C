// <fstream>: Esta biblioteca fornece funcionalidades gerais de entrada e saída de arquivos em C++. 
//  Ela é usada para criar, abrir, ler e escrever em arquivos, tanto em modo de texto quanto binário.

// <ifstream>: Parte da biblioteca <fstream>, esta classe é usada para ler dados de um arquivo. 
//  Você cria um objeto <ifstream> para abrir um arquivo existente e ler informações a partir dele.

// <ofstream>: Parte da biblioteca <fstream>, esta classe é usada para escrever dados em um arquivo.
//  Você cria um objeto <ofstream> para criar ou abrir um arquivo e escrever informações nele.

// <wfstream>: Similar à <fstream>, esta biblioteca é usada para operações de arquivo wide, que envolvem caracteres Unicode. 
//  Ela oferece funcionalidades para operações de entrada e saída de arquivos wide.

// <wifstream>: Parte da biblioteca <wfstream>, esta classe é usada para ler dados wide (Unicode) de um arquivo. 
//  É semelhante ao ifstream, mas lida com caracteres wide.

// <wofstream>: Parte da biblioteca <wfstream>, esta classe é usada para escrever dados wide (Unicode) em um arquivo. 
//  Ela é semelhante ao ofstream, mas lida com caracteres wide.

// ● Bibliotecas:
// <fstream>, <ifstream> e <ofstream>
// <wfstream>, <wifstream> e <wofstream> (wide)

// ● Criar:
// fstream fs;

// ● Abrir:
// fs.open("arq.txt", fstream::in | fstream::out);

// ● Criar e Abrir:
// fstream fs("arq.txt", fstream::in | fstream::out);

// Método “open” possui diversos modos de acesso:
// • fstream::in: modo leitura
// • fstream::out: modo escrita
// • fstream::binary: modo binário
// • fstream::ate: cursor de escrita posicionado no final do arquivo (at end)
// • fstream::app: todas operações de escrita ocorrem no final do arquivo (append)
// • fstream::trunc: caso o arquivo exista, seu conteúdo é apagado por completo (truncate)

// Métodos para leitura:
// • operador >> - lê “n” caracteres tipados
// • get() - lê “n” caracteres e armazena em uma string
// • getline() - lê uma linha e armazena em uma string
// • read() - lê “n” caracteres e armazena em um array

// Métodos para escrita:
// • operador << - escreve “n” caracteres tipados
// • put() - escreve um caractere
// • write() - escreve “n” caracteres de um array
// • flush() - salva em disco o conteúdo da memória


// File Stream – Exemplo Escrita
#include <fstream>
#include <iostream>
using namespace std;

int main ()
{
    fstream fs;
    string texto;
    fs.open("arq.txt", fstream::out | fstream::trunc);
    if(fs.is_open())
    {
        cout << "Digite varias linhas de texto.\nCtrl+Z para finalizar.\n";
        while(getline(cin, texto))
            fs << texto << endl;
        fs.close();
    }
    else
        cout << "Erro";

    return 0;
}

// File Stream – Exemplo Leitura
#include <fstream>
#include <iostream>
using namespace std;

int main ()
{
    fstream fs;
    string str;
    fs.open("arq.txt", fstream::in);
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

// StringStream
// • Possibilidade de adicionar dados a um stream
// • Possibilidade de transformar um stream em string
// • Permite o uso dos operadores e funções de stream
// • Facilita a leitura de dados
// • Facilita a escrita de dados
// • Biblioteca <sstream>


// StringStream – Exemplo Leitura
#include <iostream>
#include <sstream>
using namespace std;

int main ()
{
    string texto = "Pedro Silva\t25\t1.76\nMaria Pereira\t23\t1.69";
    stringstream ss(texto);
    string nome;
    int idade;
    float altura;

    while(!ss.eof())
    {
        getline(ss, nome, '\t');
        ss >> idade;
        ss >> altura;
        cout << nome << endl << idade << endl << altura << endl;
    }

    return 0;
}

// StringStream – Exemplo Escrita
#include <iostream>
#include <sstream>
using namespace std;

int main ()
{
    stringstream ss;
    string nome = "Pedro Silva";
    int idade = 25;
    float altura = 1.76;

    ss << nome << '\t' << idade << '\t' << altura << endl;
    ss << "Maria Pereira\t23\t1.69\n";

    cout << ss.str();

    return 0;
}
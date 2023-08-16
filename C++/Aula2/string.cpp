// Declare um array de char com tamanho 100 e o inicialize com uma frase
// digitada pelo usuário. Em seguida, mostre na tela a capacidade de
// armazenamento total do array e a quantidade de caracteres da frase digitada

#include <iostream>
#include <string>

int main() {
    std::string frase;

    std::cout << "Digite uma frase: ";
    std::getline(std::cin, frase);

    std::cout << frase << std::endl;

    size_t tamanho = frase.length();

    std::cout << "Capacidade total do array: " << sizeof(frase) << std::endl;
    std::cout << "Quantidade de caracteres da frase é " << tamanho << std::endl;

    return 0;
}

// Receba duas palavras através do teclado e mostre na tela se ambas são iguais
// ou se a primeira é anterior ou posterior à segunda conforme a ordem alfabética

#include <iostream>
using namespace std;

int main() {
    string primeiraPalavra;
    string segundaPalavra;

    cout << "Digite uma palavra: ";
    cin >> primeiraPalavra;

    cout << "Digite outra palavra: ";
    getline(cin, segundaPalavra);

    int resultado = primeiraPalavra.compare(segundaPalavra);

    if (resultado == 0) {
        cout << "Ambas palavras são iguais!" << endl;
    } else if (resultado < 0) {
        cout << "A " << primeiraPalavra << " é alfabeticamente anterior a " << segundaPalavra << endl;
    } else {
        cout << "A " << primeiraPalavra << " é alfabeticamente posterior a " << segundaPalavra << endl;
    }

    return 0;
}

// Declare 3 variáveis e as inicialize com um nome, uma cidade e uma profissão.
// Em seguida, declare e alimente uma quarta variável montando uma nova frase com esses 3 elementos.
// Por fim, imprima a frase. Utilize a função strcat. Experimente também a função sprintf

#include <iostream>
#include <string>

int main() {
    std::string nome = "Antonio";
    std::string cidade = "Porto Alegre";
    std::string profissao = "Pentester";

    std::string frase;

    // frase += "O seu nome é "; or frase.append("O seu nome é ");
    // frase += nome;
    // frase += " e mora em ";
    // frase += cidade;
    // frase += " e trabalha como ";
    // frase += profissao;
    // frase += " ";

    frase = "O seu nome é " + nome + " e mora em " + cidade + " e trabalha como " + profissao;

    std::cout << frase;

    return 0;
}

// A partir de dois textos armazenados nas variáveis “frase” e “palavra”,
// identifique se “palavra” está contida na “frase”

#include <iostream>
using namespace std;

int main() {
    string frase = "oi zézinho";
    string palavra = "oie";

    size_t pos = frase.find(palavra);

    if (pos != string::npos) {
        cout << "Palavra '" << palavra << "' está em '" << frase << "'" << endl;
    } else {
        cout << "Palavra '" << palavra << "' não está em '" << frase << "'" << endl;
    }

    return 0;
}
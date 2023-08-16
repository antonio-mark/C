// Solicite ao usuário o seu nome completo, cidade, dia, mês e ano do
// seu nascimento. Em seguida, imprima na tela a seguinte frase:
// <nome> nasceu em <dd/mm/aaaa> na cidade <cidade>

#include <iostream>
using namespace std;

int main() 
{
    string nome, sobrenome, cidade;
    int diaNasc, mesNasc, anoNasc;

    cout << "Qual o seu nome completo?" << endl;
    cin >> nome >> sobrenome;
    cout << "Qual a sua cidade?" << endl;
    cin >> cidade;
    cout << "Qual o dia de seu nascimento?" << endl;
    cin >> diaNasc;
    cout << "Qual o mes de seu nascimento?" << endl;
    cin >> mesNasc;
    cout << "Qual o ano de seu nascimento?" << endl;
    cin >> anoNasc;

    cout << nome << " " << sobrenome << " nasceu em " << diaNasc << "/" << mesNasc << "/" << anoNasc << " na cidade " << cidade << endl;

    return 0;
}

// • Solicite ao usuário que ele informe um número entre 32 e 255 e
// imprima na tela o caractere ASCII correspondente

#include <iostream>

int main() {
    int numero = 0;

    while (numero < 32 || numero > 255) {
        std::cout << "Informe um número entre 32 e 255: ";
        std::cin >> numero;
    }

    std::cout << static_cast<char>(numero) << std::endl;
    return 0;
}

// • Solicite ao usuário que ele informe um número fracionário e o
// imprima como um número inteiro e depois como um número
// fracionário com três casas decimais

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float numeroFracionario = 0.0;

    cout << "Informe um número fracionário: ";
    cin >> numeroFracionario;
            
            //fixed << setprecision(0)
    cout << static_cast<int>(numeroFracionario) << endl;
    cout << fixed << setprecision(3) << numeroFracionario;

    return 0;
}

// Solicite ao usuário que ele informe um caractere representando uma
// moeda e um número fracionário representando um valor.
// Mostre na tela a moeda + $ + valor com 2 casas decimais

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char moeda;
    float numeroFracionario;

    cout << "Informe um caractere de moeda e um valor fracionário ($4.99): ";
    cin >> moeda >> numeroFracionario;

    cout << moeda << " " << fixed << setprecision(2) << numeroFracionario;

    return 0;
}

// Solicite ao usuário que ele informe 3 números fracionários.
// Imprima os 3 números com duas casas decimais, alinhados à direita.
// Teste como entrada números exatos sem casas decimais, números com 1, 2, 3 e 4 casas decimais,
// negativos, positivos, unidades, dezenas, centenas, etc

#include <iostream>
#include <iomanip>

int main() {
    float n1, n2, n3;
    int casas = 0;

    std::cout << "Informe 3 números fracionários: ";
    std::cin >> n1 >> n2 >> n3;

    std::cout << std::fixed << std::setprecision(2) << std::setw(15) << n1 << " " << n2 << " " << n3 << std::endl;

    if (n1 == static_cast<int>(n1)) {
        std::cout << "Número 1 é um número inteiro: " << static_cast<int>(n1) << std::endl;
    }

    if (n2 >= 0) {
        std::cout << "Número 2 é positivo." << std::endl;
    } else {
        std::cout << "Número 2 é negativo." << std::endl;
    }

    while (n1 != static_cast<int>(n1)) {
        n1 *= 10;
        casas++;
    }
    std::cout << "Número 1 tem " << casas << " casa(s) decimal(is)" << std::endl;

    int numDigitos = std::to_string(static_cast<int>(n3)).length();

    if (numDigitos == 3) {
        std::cout << "Número 3 é uma centena." << std::endl;
    } else if (numDigitos == 2) {
        std::cout << "Número 3 é uma dezena." << std::endl;
    } else {
        std::cout << "Número 3 é uma unidade." << std::endl;
    }

    return 0;
}

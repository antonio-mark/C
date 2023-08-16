// Implementar um programa que solicite dois números ao usuário e exiba na tela
// a soma, subtração, multiplicação, divisão

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numero1, numero2;

    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "Digite o segundo número: ";
    cin >> numero2;

    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    float multiplicacao = numero1 * numero2;

    cout << "A soma dos números é: " << soma << endl;
    cout << "A subtração dos números é: " << fixed << setprecision(3) << static_cast<float>(subtracao) << endl;
    cout << "A multiplicação dos números é: " << fixed << setprecision(2) << multiplicacao << endl;
    cout << "A divisão dos números é: " << numero1 / numero2 << endl;

    return 0;
}

// Implementar um programa que solicite um número ao usuário.
// Sendo este número uma temperatura em graus Fahrenheit, faça um programa para converter
// esta temperatura em graus Celsius e exiba o resultado na tela. C = (F - 32) / 1.8

#include <iostream>

int main()
{
    double numero;

    std::cout << "Digite uma temperatura em graus Fahrenheit: ";
    std::cin >> numero;

    std::cout << "A temperatura em graus Celsius é: " << (numero - 32) / 1.8 << " °C";

    return 0;
}

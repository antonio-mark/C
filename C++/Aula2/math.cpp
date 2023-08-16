// Desenvolva um programa que solicite ao usuário o raio de um círculo e exiba o diâmetro,
// circunferência e a área deste círculo na tela

#include <iostream>
#include <cmath>

int main()
{
    float raio;

    std::cout << "Digite o raio de um círculo: ";
    std::cin >> raio;

    std::cout << "Diâmetro: " << raio * 2 << std::endl;
    std::cout << "Circunferência: " << 2 * M_PI * raio << std::endl;
    std::cout << "Área: " << M_PI * pow(raio, 2) << std::endl;

    return 0;
}
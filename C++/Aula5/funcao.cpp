// Calculadora básica: Digite uma expressão matemática com dois números inteiros ou fracionários,
// exemplos:   1+1       2.3*2       5-2.7       9.3/2.4
// • Interprete a expressão e dê o resultado correto;
// • Cada operação matemática deve ser uma opção do switch - case;
// • Cada operação matemática deve ser uma função que retorna o resultado da operação para o chamador(main);
// • A impressão do resultado deve ser feita no main;

#include <iostream>

float somar(float &a, float &b)
{
    return a + b;
}

float subtrair(float &a, float &b)
{
    return a - b;
}

float multiplicar(float &a, float &b)
{
    return a * b;
}

float dividir(float &a, float &b)
{
    return a / b;
}

int main()
{
    float n1 = 0, n2 = 0;
    char operador;

    std::cout << "Digite uma expressão matemática com dois números inteiros ou fracionários. Ex: 2.3*2" << std::endl;
    std::cin >> n1 >> operador >> n2;

    switch (operador)
    {
    case '+':
        std::cout << "O resultado da soma é: " << somar(n1, n2) << std::endl;
        break;
    case '-':
        std::cout << "O resultado da subtração é: " << subtrair(n1, n2) << std::endl;
        break;
    case '*':
        std::cout << "O resultado da multiplicação é: " << multiplicar(n1, n2) << std::endl;
        break;
    case '/':
        std::cout << "O resultado da divisão é: " << dividir(n1, n2) << std::endl;
        break;
    default:
        std::cerr << "Houve um erro ao tentar calcular." << std::endl;
        break;
    }

    return 0;
}

// Faça uma função chamada “ehPositivo” que recebe um número
// como parâmetro. Deverá retornar 1 (true) caso o parâmetro seja
// positivo ou zero e retornar 0 (false) caso o número seja negativo.
// Imprimir a partir do “main” o resultado da função;

#include <iostream>

bool ehPositivo(int num)
{
    return num >= 0;
}

int main()
{
    int n1 = 0;

    std::cout << "Digite um número: ";
    std::cin >> n1;

    std::cout << ehPositivo(n1);

    return 0;
}

// Faça um procedimento chamado “raizes”, que recebe 3 parâmetros
// e calcule as raízes conforme a fórmula de Baskara. A partir do “main”, deverá imprimir na tela
// as raízes calculadas, ou informar que não existem raízes.
// Utilizar a função “ehPositivo” para verificar se o delta da fórmula de Baskara é positivo;

#include <iostream>
#include <cmath>

bool ehPositivo(int num)
{
    return num >= 0;
}

void raizes(int a, int b, int c)
{
    int delta = b * b - 4 * a * c;

    if (ehPositivo(delta))
    {
        double raiz1 = (-b + std::sqrt(delta)) / (2.0 * a);
        double raiz2 = (-b - std::sqrt(delta)) / (2.0 * a);
        std::cout << "Raiz 1: " << raiz1 << std::endl;
        std::cout << "Raiz 2: " << raiz2 << std::endl;
    }
    else
    {
        std::cout << "Não existem raízes reais." << std::endl;
    }
}

int main()
{
    int a, b, c;
    std::cout << "Digite os coeficientes a, b e c da equação quadrática (ax^2 + bx + c): ";
    std::cin >> a >> b >> c;

    raizes(a, b, c);

    return 0;
}

// Faça um programa que solicite ao usuário informar uma hora, minuto e segundo no formato “hh:mm:ss”.
// Crie uma função chamada “horaParaFloat” que recebe esses 3 parâmetros separadamente.
// Essa função deverá retornar um número float representando as horas, minutos e segundos como um número fracionário.
// Ex: “01:15:30” = 1,2583 ou “13:20:15” = 13,3375.
// Imprima o número fracionário a partir do “main”;

#include <iostream>
#include <sstream>
#include <string>

float horaParaFloat(int hora, int minuto, int segundo) {
    float resultado = hora + (minuto / 60.0) + (segundo / 3600.0);
    return resultado;
}

int main() {
    std::string entrada;

    std::cout << "Informe a hora no formato 'hh:mm:ss': ";
    std::cin >> entrada;

    std::stringstream ss(entrada); // construir strings no formato de entrada (input)
    int hora, minuto, segundo;
    char separador;
    ss >> hora >> separador >> minuto >> separador >> segundo;
    
    float resultado = horaParaFloat(hora, minuto, segundo);
    
    std::cout << "Número fracionário: " << resultado << std::endl;

    return 0;
}

// Altere o programa anterior e adicione uma função chamada “char* floatParaHora”,
// que recebe como parâmetro um número fracionário e retorne uma referência para um array de char
// contendo as horas, minutos e segundos correspondentes, no formato “hh:mm:ss”;

#include <iostream>
#include <cmath>
// #include <string>
// #include <sstream>
// #include <iomanip>

// std::string floatParaHora(float numero) {
//     int hora = static_cast<int>(numero);
//     int minuto = static_cast<int>((numero - hora) * 60);
//     int segundo = static_cast<int>(std::ceil((numero - hora - minuto / 60.0) * 3600));
    
//     std::string resultado;
//     resultado += std::to_string(hora) + ":";

//     if (minuto < 10) {
//         resultado += "0"; // Adiciona um zero à esquerda para minutos menores que 10
//     }
//     resultado += std::to_string(minuto) + ":";

//     if (segundo < 10) {
//         resultado += "0"; // Adiciona um zero à esquerda para segundos menores que 10
//     }
//     resultado += std::to_string(segundo);

//     return resultado;
//     // return std::to_string(hora)
//     //  .append(":")
//     //  .append(std::to_string(minuto))
//     //  .append(":")
//     //  .append(std::to_string(segundo));
//     // or
//     // return std::to_string(hora) + ":" + std::to_string(minuto) + ":" + std::to_string(segundo);
// }

// std::string floatParaHora(float numero) {
//     int hora = static_cast<int>(numero);
//     int minuto = static_cast<int>((numero - hora) * 60);
//     int segundo = static_cast<int>(std::ceil((numero - hora - minuto / 60.0) * 3600));

//     std::ostringstream resultado; // construir strings no formato de saída (output)
//     resultado << std::setfill('0') << std::setw(2) << hora << ":" << std::setw(2) << minuto << ":" << std::setw(2) << segundo;

//     return resultado.str();
// }

char* floatParaHora(float numero) {
    int hora = static_cast<int>(numero);
    int minuto = static_cast<int>((numero - hora) * 60);
    int segundo = static_cast<int>(std::ceil((numero - hora - minuto / 60.0) * 3600));

    // char* resultado = new char[9]; // array alocado dinamicamente
    // snprintf(resultado, 9, "%02d:%02d:%02d", hora, minuto, segundo);
    static char resultado[9]; // Array para armazenar o resultado (8 caracteres + null-terminator)
    snprintf(resultado, sizeof(resultado), "%02d:%02d:%02d", hora, minuto, segundo);
    return resultado;
}

int main() {
    float numero;

    std::cout << "Informe um número fracionário: ";
    std::cin >> numero;

    //std::string resultadoHora = floatParaHora(numero);
    char* resultadoHora = floatParaHora(numero);
    std::cout << "Hora formatada: " << resultadoHora << std::endl;

    // delete[] resultadoHora; // libera a memória alocada dinamicamente

    return 0;
}

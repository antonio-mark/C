// Modifique o último exemplo para exibir ao usuário uma mensagem de nota inválida
// menor que zero e outra mensagem de nota inválida maior que 10, além de indicar se
// está aprovado ou pegou grau C;

#include <iostream>

int main() {
    float notaFinal = 9.5;
    if (notaFinal < 0)
        std::cout << "Nota inválida menor que zero!" << std::endl;

    if (notaFinal > 10)
        std::cout << "Nota inválida maior que 10!" << std::endl;

    if (notaFinal >= 6.0)
        std::cout << "Aprovado!" << std::endl;
    else
        std::cout << "Grau C" << std::endl;

    return 0;
}

// Solicitar um número inteiro "a" e imprimir na tela se ele é par ou ímpar;

#include <iostream>

int main() {
    int num;

    std::cout << "Digite um número inteiro: ";
    std::cin >> num;

    if (num % 2 == 0)
        std::cout << "PAR" << std::endl;
    else
        std::cout << "IMPAR" << std::endl;

    return 0;
}

// Solicitar dois números inteiros "a" e "b" e imprimir na tela se
// o primeiro é perfeitamente divisível pelo segundo("a" / "b"), sem gerar resto;

#include <iostream>

int main() {
    int a, b;

    std::cout << "Digite um número inteiro: ";
    std::cin >> a;

    std::cout << "Digite outro número inteiro: ";
    std::cin >> b;

    if (a % b == 0)
        std::cout << "O primeiro é perfeitamente divisível" << std::endl;
    else
        std::cout << "O primeiro não é perfeitamente divisível" << std::endl;

    return 0;
}

// Solicitar dois números inteiros "a" e "b" e imprimir na tela se o resultado
// da subtração entre eles("a" - "b") resulta em número positivo ou negativo;

#include <iostream>

int main() {
    int a, b;

    std::cout << "Digite um número inteiro: ";
    std::cin >> a;

    std::cout << "Digite outro número inteiro: ";
    std::cin >> b;

    if (a - b >= 0)
        std::cout << "o número é positivo" << std::endl;
    else
        std::cout << "o número é negativo" << std::endl;

    return 0;
}


// Solicitar um número inteiro "a" representando uma temperatura em graus Celsius.
// Imprimir na tela se nessa temperatura a água se encontra em estado sólido, líquido ou gasoso;

#include <iostream>

int main() {
    int a;

    std::cout << "Digite um número inteiro representando uma temperatura em graus Celsius: ";
    std::cin >> a;

    if (a >= 100)
        std::cout << "gasoso" << std::endl;
    else if (a <= 0)
        std::cout << "sólido" << std::endl;
    else
        std::cout << "líquido" << std::endl;

    return 0;
}

// Solicitar uma letra e imprimir na tela se ela é maiúscula ou minúscula.
// Utilizar a tabela ASCII para consulta;

#include <iostream>

int main() {
    char letra;

    std::cout << "Digite uma letra: ";
    std::cin >> letra;

    if (letra >= 'A' && letra <= 'Z')
        std::cout << "'" << letra << "' é maiúscula." << std::endl;
    else if (letra >= 'a' && letra <= 'z')
        std::cout << "'" << letra << "' é minúscula." << std::endl;
    else
        std::cout << "'" << letra << "' não está no alfabeto." << std::endl;

    return 0;
}


// Solicitar duas letras "a" e "b" e imprimir na tela se a letra "a" é igual, antecessora
// ou sucessora da letra "b". Utilizar a tabela ASCII para consulta;

#include <iostream>

int main() {
    char a, b;

    std::cout << "Digite uma letra: ";
    std::cin >> a;

    std::cout << "Digite outra letra: ";
    std::cin >> b;

    if (a == b)
        std::cout << a << " e " << b << " são iguais." << std::endl;
    else if (a < b)
        std::cout << a << " é antecessora de " << b << "." << std::endl;
    else
        std::cout << a << " é sucessora de " << b << "." << std::endl;

    return 0;
}


// Utilizando a equação do MRU(distância = velocidade * tempo), desenvolva um programa que
// solicite os 3 dados, mas receba apenas 2 e calcule o terceiro.
// Os dados devem ser números fracionários, e o dado a ser calculado deve ser informado como zero.

#include <iostream>

int main() {
    float distancia, velocidade, tempo;

    std::cout << "Digite a distância (ou 0 se for desconhecida): ";
    std::cin >> distancia;

    std::cout << "Digite a velocidade (ou 0 se for desconhecida): ";
    std::cin >> velocidade;

    std::cout << "Digite o tempo (ou 0 se for desconhecido): ";
    std::cin >> tempo;

    if (distancia == 0) {
        distancia = velocidade * tempo;
        std::cout << "A distância é: " << distancia << std::endl;
    } else if (velocidade == 0) {
        velocidade = distancia / tempo;
        std::cout << "A velocidade é: " << velocidade << std::endl;
    } else {
        tempo = distancia / velocidade;
        std::cout << "O tempo é: " << tempo << std::endl;
    }

    return 0;
}


// Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano,
// A(x1, y1) e B(x2, y2), calcule e escreva na tela a distância “d” entre eles.
// A fórmula que efetua tal cálculo é : d(A, B) =√(XB−XA)2 + (YB−YA)2

#include <iostream>
#include <cmath>

int main() {
    float x1, y1, x2, y2;

    std::cout << "Digite x1: ";
    std::cin >> x1;

    std::cout << "Digite y1: ";
    std::cin >> y1;

    std::cout << "Digite x2: ";
    std::cin >> x2;

    std::cout << "Digite y2: ";
    std::cin >> y2;

    float distancia = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));

    std::cout << "A distância \"d\" entre eles é " << distancia << std::endl;

    return 0;
}


// Tendo como dados de entrada a altura e o sexo de uma pessoa,
// construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
// • Para homens : (72.7 * h) - 58(h = altura)
// • Para mulheres : (62.1 * h) - 44.7(h = altura)
// • Após calcular o peso ideal para a pessoa, solicite o seu peso e
// informe se ela está dentro da faixa ideal(peso + / -5 %), acima ou abaixo do peso ideal.

#include <iostream>

int main() {
    float altura, peso, pesoIdeal, pesoMinimoIdeal, pesoMaximoIdeal;
    char genero;

    std::cout << "Digite seu gênero: ";
    std::cin >> genero;

    std::cout << "Digite sua altura: ";
    std::cin >> altura;

    if (genero == 'M' || genero == 'm')
        pesoIdeal = (72.7 * altura) - 58;
    else
        pesoIdeal = (62.1 * altura) - 44.7;

    std::cout << "O peso ideal é " << pesoIdeal << std::endl;

    std::cout << "Digite seu peso: ";
    std::cin >> peso;

    pesoMinimoIdeal = pesoIdeal * 0.95;
    pesoMaximoIdeal = pesoIdeal * 1.05;

    if (peso >= pesoMinimoIdeal && peso <= pesoMaximoIdeal) {
        std::cout << "Seu peso está dentro da faixa ideal." << std::endl;
    } else if (peso < pesoMinimoIdeal) {
        std::cout << "Você está abaixo do peso ideal." << std::endl;
    } else {
        std::cout << "Você está acima do peso ideal." << std::endl;
    }

    return 0;
}

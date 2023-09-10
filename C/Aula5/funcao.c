// Calculadora básica: Digite uma expressão matemática com dois números inteiros ou fracionários,
// exemplos:   1+1       2.3*2       5-2.7       9.3/2.4
// • Interprete a expressão e dê o resultado correto;
// • Cada operação matemática deve ser uma opção do switch - case;
// • Cada operação matemática deve ser uma função que retorna o resultado da operação para o chamador(main);
// • A impressão do resultado deve ser feita no main;

#include <stdio.h>
#include <stdlib.h>

float somar(float *a, float *b)
{
    return *a + *b;
}

float subtrair(float *a, float *b)
{
    return *a - *b;
}

float multiplicar(float *a, float *b)
{
    return *a * *b;
}

float dividir(float *a, float *b)
{
    return *a / *b;
}

int main()
{
    float n1 = 0, n2 = 0;
    char operator;

    printf("Digite uma expressão matemática com dois números inteiros ou fracionários. Ex: 2.3*2\n");
    scanf("%f%c%f", &n1, &operator, & n2);

    switch (operator)
    {
    case '+':
        printf("O resultado da soma é: %.2f", somar(&n1, &n2));
        break;
    case '-':
        printf("O resultado da subtração é: %.2f", subtrair(&n1, &n2));
        break;
    case '*':
        printf("O resultado da multiplicação é: %.2f", multiplicar(&n1, &n2));
        break;
    case '/':
        printf("O resultado da divisão é: %.2f", dividir(&n1, &n2));
        break;
    default:
        printf("Houve um erro ao tentar calcular.");
        break;
    }

    return 0;
}

// Faça uma função chamada “ehPositivo” que recebe um número
// como parâmetro. Deverá retornar 1 (true) caso o parâmetro seja
// positivo ou zero e retornar 0 (false) caso o número seja negativo.
// Imprimir a partir do “main” o resultado da função;

#include <stdio.h>

int ehPositivo(int num)
{
    return num >= 0;
}

int main()
{
    int n1 = 0;

    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("%d", ehPositivo(n1));

    return 0;
}

// Faça um procedimento chamado “raizes”, que recebe 3 parâmetros
// e calcule as raízes conforme a fórmula de Baskara. A partir do “main”, deverá imprimir na tela
// as raízes calculadas, ou informar que não existem raízes.
// Utilizar a função “ehPositivo” para verificar se o delta da fórmula de Baskara é positivo;

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool ehPositivo(int num)
{
    return num >= 0;
}

void raizes(int a, int b, int c)
{
    int delta = b * b - 4 * a * c;

    if (ehPositivo(delta))
    {
        int raiz1 = (-b + sqrt(delta)) / (2 * a);
        int raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raiz 1: %d\n", raiz1);
        printf("Raiz 2: %d\n", raiz2);
    }
    else
    {
        printf("Não existem raízes reais.\n");
    }
}

int main()
{
    int a, b, c;
    printf("Digite os coeficientes a, b e c da equação quadrática (ax^2 + bx + c): ");
    scanf("%d %d %d", &a, &b, &c);

    raizes(a, b, c);

    return 0;
}

// Faça um programa que solicite ao usuário informar uma hora, minuto e segundo no formato “hh:mm:ss”.
// Crie uma função chamada “horaParaFloat” que recebe esses 3 parâmetros separadamente.
// Essa função deverá retornar um número float representando as horas, minutos e segundos como um número fracionário.
// Ex: “01:15:30” = 1,2583 ou “13:20:15” = 13,3375.
// Imprima o número fracionário a partir do “main”;

#include <stdio.h>

float horaParaFloat(int h, int m, int s)
{
    return h + (m / 60.0) + (s / 3600.0);
}

int main()
{
    int h, m, s;

    printf("Digite a hora, minuto e segundo no formato hh:mm:ss: ");
    scanf("%d:%d:%d", &h, &m, &s);

    float resultado = horaParaFloat(h, m, s);

    printf("Horas fracionárias: %.4f\n", resultado);

    return 0;
}

// Altere o programa anterior e adicione uma função chamada “char* floatParaHora”,
// que recebe como parâmetro um número fracionário e retorne uma referência para um array de char
// contendo as horas, minutos e segundos correspondentes, no formato “hh:mm:ss”;

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char *floatParaHora(float num)
{
    // static char str[10];
    // static char str[] = "00:00:00";

    // static importante neste contexto para garantir que a variável
    // seja mantida durante toda a execução do programa e não seja destruída quando
    // a função floatParaHora terminar sua execução.

    char *str = (char *)malloc(sizeof(char) * 10);

    int hora = (int)num;
    int minuto = (int)((num - hora) * 60);
    int segundo = (int)ceil((((num - hora) * 3600 - minuto * 60)));

    sprintf(str, "%02d:%02d:%02d", hora, minuto, segundo);
    // snprintf(str, 10, "%02d:%02d:%02d", hora, minuto, segundo); // malloc
    // snprintf(str, sizeof(str), "%02d:%02d:%02d", hora, minuto, segundo); // static char

    return str;
}

int main()
{
    float num;

    printf("Digite um número fracionário: ");
    scanf("%f", &num);

    char *resultado = floatParaHora(num);

    printf("Hora formatada: %s\n", resultado);
    // *resultado retorna um char (12:34:56 retorna 1), ou seja o primeiro. char[0] = 1
    // &resultado o endereço de memória.

    free(resultado);
    return 0;
}
// Modifique o último exemplo para exibir ao usuário uma mensagem de nota inválida
// menor que zero e outra mensagem de nota inválida maior que 10, além de indicar se
// está aprovado ou pegou grau C;

#include <stdio.h>
void main()
{
    float notaFinal = 9.5;
    if (notaFinal < 0)
        printf("Nota inválida menor que zero!");

    if (notaFinal > 10)
        printf("Nota inválida maior que 10!");

    if (notaFinal >= 6.0)
        printf("Aprovado!");
    else
        printf("Grau C");
}

// Solicitar um número inteiro "a" e imprimir na tela se ele é par ou ímpar;

#include <stdio.h>
void main()
{
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("PAR");
    else
        printf("IMPAR");
}

// Solicitar dois números inteiros "a" e "b" e imprimir na tela se
// o primeiro é perfeitamente divisível pelo segundo("a" / "b"), sem gerar resto;

#include <stdio.h>
void main()
{
    int a, b;

    printf("Digite um número inteiro: ");
    scanf("%d", &a);

    printf("Digite outro número inteiro: ");
    scanf("%d", &b);

    if (a % b == 0)
        printf("O primeiro é perfeitamente divisível");
    else
        printf("O primeiro não é perfeitamente divisível");
}

// Solicitar dois números inteiros "a" e "b" e imprimir na tela se o resultado
// da subtração entre eles("a" - "b") resulta em número positivo ou negativo;

#include <stdio.h>
void main()
{
    int a, b;

    printf("Digite um número inteiro: ");
    scanf("%d", &a);

    printf("Digite outro número inteiro: ");
    scanf("%d", &b);

    if (a - b >= 0)
        printf("o número é positivo");
    else
        printf("o número é negativo");
}

// Solicitar um número inteiro "a" representando uma temperatura em graus Celsius.
// Imprimir na tela se nessa temperatura a água se encontra em estado sólido, líquido ou gasoso;

#include <stdio.h>
void main()
{
    int a;

    printf("Digite um número inteiro representando uma temperatura em graus Celsius: ");
    scanf("%d", &a);

    if (a >= 100)
        printf("gasoso");
    else if (a <= 0)
        printf("sólido");
    else
        printf("líquido");
}

// Solicitar uma letra e imprimir na tela se ela é maiúscula ou minúscula.
// Utilizar a tabela ASCII para consulta;

#include <stdio.h>
int main()
{
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if (letra >= 'A' && letra <= 'Z')
        printf("'%c' é maiuscula.", letra);
    else if (letra >= 'a' && letra <= 'z')
        printf("'%c' é minúscula.", letra);
    else
        printf("'%c' não esta no alfabeto.", letra);

    return 0;
}

// Solicitar duas letras "a" e "b" e imprimir na tela se a letra "a" é igual, antecessora
// ou sucessora da letra "b". Utilizar a tabela ASCII para consulta;

#include <stdio.h>
int main()
{
    char a, b;

    printf("Digite uma letra: ");
    scanf("%c", &a);

    while (getchar() != '\n')
        ;

    printf("Digite uma letra: ");
    scanf("%c", &b);

    if (a == b)
        printf("%c e %c são iguais.", a, b);
    else if (a < b)
        printf("%c é antecessora de %c.", a, b);
    else
        printf("%c é sucessora de %c.", a, b);

    return 0;
}

// Utilizando a equação do MRU(distância = velocidade * tempo), desenvolva um programa que
// solicite os 3 dados, mas receba apenas 2 e calcule o terceiro.
// Os dados devem ser números fracionários, e o dado a ser calculado deve ser informado como zero.

#include <stdio.h>
int main()
{
    float distancia, velocidade, tempo;

    printf("Digite a distância (ou 0 se for desconhecida): ");
    scanf("%f", &distancia);

    printf("Digite a velocidade (ou 0 se for desconhecida): ");
    scanf("%f", &velocidade);

    printf("Digite o tempo (ou 0 se for desconhecido): ");
    scanf("%f", &tempo);

    if (distancia == 0)
    {
        distancia = velocidade * tempo;
        printf("a distância é: %f", distancia);
    }
    else if (velocidade == 0)
    {
        velocidade = distancia / tempo;
        printf("a velocidade é: %f", velocidade);
    }
    else
    {
        tempo = distancia / velocidade;
        printf("a tempo é: %f", tempo);
    }

    return 0;
}

// Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano,
// A(x1, y1) e B(x2, y2), calcule e escreva na tela a distância “d” entre eles.
// A fórmula que efetua tal cálculo é : d(A, B) =√(XB−XA)2 + (YB−YA)2

#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2;

    printf("Digite x1: ");
    scanf("%f", &x1);

    printf("Digite y1: ");
    scanf("%f", &y1);

    printf("Digite x2: ");
    scanf("%f", &x2);

    printf("Digite y2: ");
    scanf("%f", &y2);

    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distância “d” entre eles é %f", distancia);

    return 0;
}

// Tendo como dados de entrada a altura e o sexo de uma pessoa,
// construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
// • Para homens : (72.7 * h) - 58(h = altura)
// • Para mulheres : (62.1 * h) - 44.7(h = altura)
// • Após calcular o peso ideal para a pessoa, solicite o seu peso e
// informe se ela está dentro da faixa ideal(peso + / -5 %), acima ou abaixo do peso ideal.

#include <stdio.h>
int main()
{
    float altura, peso, pesoIdeal, pesoMinimoIdeal, pesoMaximoIdeal;
    char genero;

    printf("Digite seu gênero: ");
    scanf("%c", &genero);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if (genero == 'M' || genero == 'm')
        pesoIdeal = (72.7 * altura) - 58;
    else
        pesoIdeal = (72.7 * altura) - 58;

    printf("O peso ideal é %f", pesoIdeal);

    printf("\nDigite seu peso: ");
    scanf("%f", &peso);

    pesoMinimoIdeal = pesoIdeal * 0.95;
    pesoMaximoIdeal = pesoIdeal * 1.05;

    if (peso >= pesoMinimoIdeal && peso <= pesoMaximoIdeal)
    {
        printf("Seu peso está dentro da faixa ideal.\n");
    }
    else if (peso < pesoMinimoIdeal)
    {
        printf("Você está abaixo do peso ideal.\n");
    }
    else
    {
        printf("Você está acima do peso ideal.\n");
    }

    return 0;
}
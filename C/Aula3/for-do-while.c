// Desenvolva um programa que imprima na tela uma sequência
// com os “n” primeiros números naturais sem considerar o zero.
// Peça para o usuário informar o valor de “n” antes de gerar a sequência;

#include <stdio.h>
int main()
{
    int n;

    printf("Digite valor de n: ");
    scanf("%d", &n);

    for (size_t i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}

// Desenvolva um programa que imprima na tela uma sequênciacom
// os “n” primeiros números naturais pares, considerando o zero.
// Peça para o usuário informar o valor de “n” antes de gerar asequência;

#include <stdio.h>
int main()
{
    int n;

    printf("Digite valor de n: ");
    scanf("%d", &n);

    for (size_t i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }

    return 0;
}

// Desenvolva um programa que imprima na tela uma sequência com os “n”
// primeiros números naturais ímpares.
// Peça para o usuário informar o valor de “n” antes de gerar a sequência;

#include <stdio.h>
int main()
{
    int n;

    printf("Digite valor de n: ");
    scanf("%d", &n);

    for (size_t i = 0; i <= n; i++)
    {
        if (i % 2 == 1)
            printf("%d ", i);
    }

    return 0;
}

// Desenvolva um programa que solicite um número inteiro “n” e imprima na tela o seu fatorial.
// Fatorial é o produto dos números inteiros consecutivos de 1 até um dado inteiro “n”;

#include <stdio.h>
int main()
{
    int n, resultado = 1;

    printf("Digite valor de n: ");
    scanf("%d", &n);

    for (size_t i = n; i > 1; i--)
    {
        resultado *= i;
    }

    printf("%d", resultado);

    return 0;
}

// Desenvolva um programa que imprima na tela uma sequência com os “n”
// primeiros números fracionários múltiplos de 0,5 iniciando em 1,5.
// Peça para o usuário informar o valor de “n” antes de gerar a sequência.Ex : “n” = 5;
// sequência = 1,5 2,0 2,5 3,0 3,5;

#include <stdio.h>
int main()
{
    int n;
    float numero = 1.5;

    printf("Digite valor de n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%.1f", numero);
        numero += 0.5;
    }

    return 0;
}

// Desenvolva um programa que imprima na tela uma sequência de “n” números fracionários,
// iniciando com um número “i” e sendo incrementados por um número “m”.
// Peça para o usuário informar os valores de “n”, “m” e “i” antes de gerar a sequência.
// Ex : “n” = 6, “m” = 0,3 e “i” = -1;
// sequência = -1,0 - 0,7 - 0,4 - 0,1 0,2 0,5;

#include <stdio.h>
int main()
{
    int n;
    float m, i;

    printf("Informe o valor de n: ");
    scanf("%d", &n);

    printf("Informe o valor de m: ");
    scanf("%f", &m);

    printf("Informe o valor de i: ");
    scanf("%f", &i);

    for (int j = 0; j < n; j++)
    {
        printf(" %.1f", i);
        i += m;
    }

    return 0;
}

// Desenvolva um programa que solicite uma quantidade indeterminada de números positivos ao usuário,
// e ao digitar o número zero, calcule e informe:
// • A quantidade de números digitados
// • A quantidade de pares
// • A quantidade de ímpares
// • A soma destes números
// • A média aritmética
// • O maior número
// • O menor número

#include <stdio.h>

int main()
{
    int numero, quantidade = 0, quantidadePares = 0, quantidadeImpares = 0;
    int soma = 0, maior = 0, menor = 0;
    float media = 0.0;

    printf("Digite os números (digite 0 para encerrar):\n");

    while (1)
    {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0)
        {
            break;
        }

        quantidade++;
        soma += numero;

        if (quantidade == 1)
        {
            maior = numero;
            menor = numero;
        }
        else
        {
            if (numero > maior)
            {
                maior = numero;
            }
            if (numero < menor)
            {
                menor = numero;
            }
        }

        if (numero % 2 == 0)
        {
            quantidadePares++;
        }
        else
        {
            quantidadeImpares++;
        }
    }

    if (quantidade > 0)
    {
        media = (float)soma / quantidade;
    }

    printf("Quantidade de números digitados: %d\n", quantidade);
    printf("Quantidade de números pares: %d\n", quantidadePares);
    printf("Quantidade de números ímpares: %d\n", quantidadeImpares);
    printf("Soma dos números: %d\n", soma);
    printf("Média aritmética: %.2f\n", media);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    return 0;
}

// Desenvolva um programa que imprima na tela as seguintes formas:
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// *
// * *
// * * *
// * * * *
// * * * * *

// * * * * *
// * * * *
// * * *
// * *
// *
// Obs.: Utilizando laços e estruturas de controle;

#include <stdio.h>

int main()
{

    printf("Primeira forma:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    printf("Segunda forma:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    printf("Terceira forma:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

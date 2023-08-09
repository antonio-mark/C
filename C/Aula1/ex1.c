// Solicite ao usuário o seu nome completo, cidade, dia, mês e ano do
// seu nascimento. Em seguida, imprima na tela a seguinte frase:
// <nome> nasceu em <dd/mm/aaaa> na cidade <cidade>
// #include <stdio.h>

// int main()
// {
//     char nome[20], sobrenome[20];
//     char cidade[50];
//     int diaNasc, mesNasc, anoNasc;

//     printf("Qual o seu nome completo?\n");
//     scanf("%s %s", nome, sobrenome);
//     printf("Qual a sua cidade?\n");
//     scanf("%s", cidade);
//     printf("Qual o dia de seu nascimento?\n");
//     scanf("%d", &diaNasc);
//     printf("Qual o mes de seu nascimento?\n");
//     scanf("%d", &mesNasc);
//     printf("Qual o ano de seu nascimento?\n");
//     scanf("%d", &anoNasc);

//     printf("%s %s nasceu em %d/%d/%d na cidade %s", nome, sobrenome, diaNasc, mesNasc, anoNasc, cidade);

//     return 0;
// }

// • Solicite ao usuário que ele informe um número entre 32 e 255 e
// imprima na tela o caractere ASCII correspondente

// #include <stdio.h>

// int main()
// {
//     int numero = 0;

//     while (numero < 32 || numero > 255)
//     {
//         printf("Informe um número entre 32 e 255: ");
//         scanf("%d", &numero);
//     };

//     printf("%c", numero);
//     return 0;
// }

// • Solicite ao usuário que ele informe um número fracionário e o
// imprima como um número inteiro e depois como um número
// fracionário com três casas decimais

// #include <stdio.h>

// void main()
// {
//     float numeroFracionario = 0.0;

//     printf("Informe um número fracionário: ");
//     scanf("%f", &numeroFracionario);

//     printf("%.f\n", numeroFracionario);
//     printf("%.3f", numeroFracionario);
// }

// Solicite ao usuário que ele informe um caractere representando uma
// moeda e um número fracionário representando um valor.
// Mostre na tela a moeda + $ + valor com 2 casas decimais

// #include <stdio.h>

// void main()
// {
//     char moeda;
//     float numeroFracionario;

//     printf("Informe um caractere de moeda e um valor fracionário ($4.99): ");
//     scanf("%c%f", &moeda, &numeroFracionario);

//     printf("%c %.2f", moeda, numeroFracionario);
// }

// Solicite ao usuário que ele informe 3 números fracionários.
// Imprima os 3 números com duas casas decimais, alinhados à direita.
// Teste como entrada números exatos sem casas decimais, números com 1, 2, 3 e 4 casas decimais,
// negativos, positivos, unidades, dezenas, centenas, etc

#include <stdio.h>

int main()
{
    float n1, n2, n3;
    int casas = 0;

    printf("Informe 3 números fracionários: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    printf("%15.2f %.2f %.2f\n", n1, n2, n3);

    if (n1 == (int)n1)
    {
        printf("Número 1 é um número inteiro: %d\n", (int)n1);
    }

    if (n2 >= 0)
    {
        printf("Número 2 é positivo.\n");
    }
    else
    {
        printf("Número 2 é negativo.\n");
    }

    while (n1 != (int)n1)
    {
        n1 *= 10;
        casas++;
    }
    printf("Número 1 tem %d casa(s) decimal(is)\n", casas);

    if (modificarUltimoDigito((int)n3) % 1 == 0)
    {
        printf("Número 3 é uma unidade.\n");
    }
    else if (modificarUltimoDigito((int)n3) % 10 == 0)
    {
        printf("Número 3 é uma dezena.\n");
    }
    else
    {
        printf("Número 3 é uma centena.\n");
    }

    return 0;
}

int modificarUltimoDigito(int numero)
{
    int ultimoDigito = numero % 10;
    int novoNumero = numero - ultimoDigito;
    return novoNumero;
}
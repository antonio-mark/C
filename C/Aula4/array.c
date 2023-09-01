// Implemente um programa que define um array A[6] vazio.
// Em seguida, faça um laço que inicialize o array de forma dinâmica com os valores[2 4 6 8 10 12],
// utilizando uma fórmula matemática para calcular os valores.
// Nenhum elemento do array deve deixar de ser inicializado.
// Depois, faça outro laço que mostre todo o array na tela;

#include <stdio.h>

int main()
{
    int A[6];

    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++)
    {
        A[i] = (i + 1) * 2;
    }

    for (int i = 0; i < sizeof(A) / sizeof(int); i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}

// Implemente um programa que define um array B[10] vazio.
// Em seguida, faça um laço que inicialize o array de forma dinâmica com os
// valores[−1.5 −1 −0.5 0 0.5 1 1.5 2 2.5 3], utilizando uma fórmula matemática
// para calcular os valores. Nenhum elemento do array deve deixar de ser inicializado.
// Depois, faça outro laço que mostre todo o array na tela;

#include <stdio.h>

int main()
{
    float B[10];

    for (int i = 0; i < sizeof(B) / sizeof(B[0]); i++)
    {
        B[i] = i * 0.5 - 1.5;
    }

    for (int i = 0; i < sizeof(B) / sizeof(B[0]); i++)
    {
        printf("%.2f ", B[i]);
    }

    return 0;
}

// Crie um array com 10 elementos, mas inicialize apenas os 5 primeiros com o valor do
// próprio índice utilizando um laço. Imprima na tela o vetor completo e veja o que aparece;

#include <stdio.h>

int main()
{
    int A[10];

    for (int i = 0; i < 5; i++)
    {
        A[i] = i;
    }

    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}

// Monte um programa que leia 10 números fracionários, os armazene em um array e
// em seguida mostre na tela:
// a. O índice e o conteúdo do elemento de menor valor;
// b. O índice e o conteúdo do elemento de maior valor;
// c. A diferença entre os elementos de maior e menor valor;

#include <stdio.h>

int main()
{
    float A[10];
    int indiceMenor = 0, indiceMaior = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o número na posição %d do array: ", i);
        scanf("%f", &A[i]);

        if (A[i] < A[indiceMenor])
            indiceMenor = i;
        if (A[i] > A[indiceMaior])
            indiceMaior = i;
    }

    float diferenca = A[indiceMaior] - A[indiceMenor];

    printf("\nElemento de menor valor:\nÍndice: %d\nValor: %.2f\n", indiceMenor, A[indiceMenor]);
    printf("\nElemento de maior valor:\nÍndice: %d\nValor: %.2f\n", indiceMaior, A[indiceMaior]);
    printf("\nDiferença entre o maior e o menor valor: %.2f\n", diferenca);

    return 0;
}

// Monte um programa que leia 10 números inteiros positivos e os armazene em um
// array. Mostre os números na ordem inversa a que foram digitados;

#include <stdio.h>

int main()
{
    int A[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o número na posição %d do array: ", i);
        scanf("%d", &A[i]);
    }

    for (int i = sizeof(A) / sizeof(int) - 1; i >= 0; i--)
        printf("%d ", A[i]);

    return 0;
}

// Monte um programa que leia 10 números inteiros positivos e os armazene em um array.
// Crie um segundo vetor e o alimente com os valores em ordem inversa ao primeiro.
// Mostre ambos na tela, percorrendo do primeiro ao último elemento;

#include <stdio.h>

int main()
{
    int A[10], B[10];

    for (int i = 0; i < sizeof(A) / sizeof(int); i++)
    {
        printf("Digite o número na posição %d do array: ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < sizeof(A) / sizeof(int); i++)
        B[i] = A[(sizeof(A) / sizeof(int) - 1) - i];

    printf("Primeiro Array\n");
    for (int i = 0; i < sizeof(A) / sizeof(int); i++)
        printf("%d ", A[i]);

    printf("\nSegundo Array\n");
    for (int i = 0; i < sizeof(B) / sizeof(int); i++)
        printf("%d ", B[i]);

    return 0;
}

// Monte um programa que leia 10 números inteiros positivos e os armazene em um array.
// Reorganize o próprio array armazenando seus elementos em ordem inversa.
// Não utilize outro vetor para isso, use apenas uma variável auxiliar.
// Mostre o array na tela após a inversão dos elementos;

#include <stdio.h>

int main()
{
    int A[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o número %d: ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        int aux = A[i];
        A[i] = A[sizeof(A) / sizeof(A[0]) - 1 - i];
        A[sizeof(A) / sizeof(A[0]) - 1 - i] = aux;
    }

    printf("\nArray após inversão dos elementos:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

// Alimente um array com 10 números e o imprima. Peça para o usuário
// informar um número e o procure no array. Se encontrar, imprima o número lido e
// a(s) posição(ões) em que foi(foram) encontrado(s).Se não encontrar,
// imprima o número lido e a mensagem "NÃO ENCONTRADO";

#include <stdio.h>

int main()
{
    int numeros[10];

    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    int numeroProcurado;
    printf("\nDigite um número para procurar: ");
    scanf("%d", &numeroProcurado);

    int encontrado = 0;
    printf("Número lido: %d\n", numeroProcurado);

    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] == numeroProcurado)
        {
            printf("Encontrado na posição %d\n", i);
            encontrado = 1;
        }
    }

    if (!encontrado)
    {
        printf("NÃO ENCONTRADO\n");
    }

    return 0;
}

// Crie um programa que solicite ao usuário digitar 5 números fracionários e os armazene em um array A.
// Depois, solicite mais 5 números e armazene em um segundo array B.
// Mostre na tela as operações matemáticas soma, subtração, multiplicação e divisão,
// índice por índice dos vetores;

#include <stdio.h>

int main()
{
    float A[5], B[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o número %d no array A: ", i);
        scanf("%f", &A[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o número %d no array B: ", i);
        scanf("%f", &B[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n\nINDEX: %d", i);
        printf("\nSoma: %.2f", A[i] + B[i]);
        printf("\nSubtração: %.2f", A[i] - B[i]);
        printf("\nMultiplicação: %.2f", A[i] * B[i]);
        printf("\nDivisão: %.2f", A[i] / B[i]);
    }

    return 0;
}

// Desafio: Monte um programa onde o usuário entra com o valor das diversas notas alcançadas
// por uma turma de alunos. O programa inicia perguntando o tamanho da turma e parte
// para a entrada de dados. A seguir, o programa deve ser capaz de exibir um histograma na tela,
// além de outras informações, conforme é mostrado a seguir:
// Obs 1 : Ao lado da menor e da maior nota, deve ser mostrado entre parênteses
// a quantidade de vezes que essa nota apareceu;
// Obs 2 : Por exemplo, na linha "7.1~8.0" os 5 “*” significam que 5 alunos
// alcançaram uma nota > 7.0 mas <= 8.0.

// Resultado da avaliação da turma:
// Menor nota: 2.1 (1x)
// Maior nota: 10.0 (2x)
// Média da turma: 6.5
// Histograma das notas:
// 0.0 ~ 3.0: ***
// 3.1 ~ 4.0: **
// 4.1 ~ 5.0: ****
// 5.1 ~ 6.0: *******
// 6.1 ~ 7.0: **********
// 7.1 ~ 8.0: *****
// 8.1 ~ 9.0: *
// 9.1 ~ 10.0: **

#include <stdio.h>

int main()
{
    int tamanhoTurma;

    printf("Digite o tamanho da turma: ");
    scanf("%d", &tamanhoTurma);

    float notas[tamanhoTurma];

    printf("\nEntre com as notas da turma:\n");
    for (int i = 0; i < tamanhoTurma; i++)
    {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float menorNota = notas[0];
    float maiorNota = notas[0];
    int qtdMenorNota = 1;
    int qtdMaiorNota = 1;

    for (int i = 1; i < tamanhoTurma; i++)
    {
        if (notas[i] < menorNota)
        {
            menorNota = notas[i];
            qtdMenorNota = 1;
        }
        else if (notas[i] == menorNota)
        {
            qtdMenorNota++;
        }

        if (notas[i] > maiorNota)
        {
            maiorNota = notas[i];
            qtdMaiorNota = 1;
        }
        else if (notas[i] == maiorNota)
        {
            qtdMaiorNota++;
        }
    }

    float somaNotas = 0.0;
    for (int i = 0; i < tamanhoTurma; i++)
    {
        somaNotas += notas[i];
    }
    float mediaTurma = somaNotas / tamanhoTurma;

    printf("\nResultado da avaliação da turma:\n");
    printf("Menor nota: %.1f (%dx)\n", menorNota, qtdMenorNota);
    printf("Maior nota: %.1f (%dx)\n", maiorNota, qtdMaiorNota);
    printf("Média da turma: %.1f\n", mediaTurma);
    printf("Histograma das notas:\n");

    int faixa[8] = {0};
    for (int i = 0; i < tamanhoTurma; i++)
    {
        if (notas[i] >= 0.0 && notas[i] <= 3.0)
            faixa[0]++;
        else if (notas[i] > 3.0 && notas[i] <= 4.0)
            faixa[1]++;
        else if (notas[i] > 4.0 && notas[i] <= 5.0)
            faixa[2]++;
        else if (notas[i] > 5.0 && notas[i] <= 6.0)
            faixa[3]++;
        else if (notas[i] > 6.0 && notas[i] <= 7.0)
            faixa[4]++;
        else if (notas[i] > 7.0 && notas[i] <= 8.0)
            faixa[5]++;
        else if (notas[i] > 8.0 && notas[i] <= 9.0)
            faixa[6]++;
        else if (notas[i] > 9.0 && notas[i] <= 10.0)
            faixa[7]++;
    }

    printf("0.0 ~ 3.0: ");
    for (int i = 0; i < faixa[0]; i++)
        printf("*");
    printf("\n");

    printf("3.1 ~ 4.0: ");
    for (int i = 0; i < faixa[1]; i++)
        printf("*");
    printf("\n");

    printf("4.1 ~ 5.0: ");
    for (int i = 0; i < faixa[2]; i++)
        printf("*");
    printf("\n");

    printf("5.1 ~ 6.0: ");
    for (int i = 0; i < faixa[3]; i++)
        printf("*");
    printf("\n");

    printf("6.1 ~ 7.0: ");
    for (int i = 0; i < faixa[4]; i++)
        printf("*");
    printf("\n");

    printf("7.1 ~ 8.0: ");
    for (int i = 0; i < faixa[5]; i++)
        printf("*");
    printf("\n");

    printf("8.1 ~ 9.0: ");
    for (int i = 0; i < faixa[6]; i++)
        printf("*");
    printf("\n");

    printf("9.1 ~ 10.0: ");
    for (int i = 0; i < faixa[7]; i++)
        printf("*");
    printf("\n");

    return 0;
}

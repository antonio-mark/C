#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade = 0, soma = 0, maior = 0, menor = 9999999;
    float media = 0.0;

    printf("Digite a quantidade de números inteiros: ");
    scanf("%d", &quantidade);

    int *qtdNumeros = (int *)malloc(sizeof(int) * quantidade);

    for (int i = 0; i < quantidade; i++)
    {
        while (qtdNumeros[i] < 5 || qtdNumeros[i] > 10) 
        {
            printf("Digite o valor inteiro (entre 5 e 10) na posição %d: ", i);
            scanf("%d", &qtdNumeros[i]);
        }
    }

    printf("\nLista de números\n");
    for (int i = 0; i < quantidade; i++)
    {
        printf("%d ", qtdNumeros[i]);

        soma += qtdNumeros[i];

        if (qtdNumeros[i] > maior)
            maior = qtdNumeros[i];

        if (qtdNumeros[i] < menor)
            menor = qtdNumeros[i];
    }

    media = (float)soma / quantidade;
    
    printf("\nSoma dos números: %d\n", soma);
    printf("Média: %.2f\n", media);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    free(qtdNumeros);

    return 0;
}
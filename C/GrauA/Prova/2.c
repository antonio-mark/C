#include <stdio.h>

int main()
{
    const int linhas = 12;
    const int colunas = 8;
    int matriz[linhas][colunas];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] =  (3 * (i - j + 2)) % (i + j + 1);
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\nListagem de números que são maiores que seus vizinhos:\n\n");
    printf("[linha][coluna] = valor\n");
    for (int i = 1; i < linhas - 1; i++)
    {
        for (int j = 1; j < colunas - 1; j++)
        {
            if (matriz[i][j] >= matriz[i-1][j] && matriz[i][j] >= matriz[i+1][j] && matriz[i][j] >= matriz[i][j-1] && matriz[i][j] >= matriz[i][j+1])
                printf("[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }

    return 0;
}
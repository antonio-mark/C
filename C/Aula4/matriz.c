// Criar uma matriz de números fracionários com 10 linhas e 10 colunas.
// Inicializar cada elemento da matriz com a parte inteira correspondente ao índice da linha
// e a parte fracionária correspondente ao índice da coluna.
// Imprimir a matriz na tela mostrando os números com uma casa decimal;

// Na matriz criada no item 1, percorrer a diagonal principal de[0][0] até [9][9] e mostrar os elementos na tela;
// Na matriz criada no item 1, percorrer a diagonal secundária de[0][9] até [9][0] e mostrar os elementos na tela;
// Na matriz criada no item 1, percorrer as bordas e mostrar os elementos na tela, em formato tabular;

#include <stdio.h>

int main()
{
    const int linhas = 10;
    const int colunas = 10;
    double matriz[linhas][colunas];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = i + (double)j / 10;
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%.1f ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\nMatriz de [0][0] até [9][9]:\n");
    for (int i = 0; i < linhas; i++)
    {
        printf("%.1f ", matriz[i][i]);
    }

    printf("\n\nMatriz de [0][9] até [9][0]:\n");
    for (int i = 0; i < linhas; i++)
    {
        printf("%.1f ", matriz[i][linhas - 1 - i]);
    }

    printf("\n\nBordas da matriz:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (i == 0 || j == 0 || i == 9 || j == 9)
                printf("%.1f ", matriz[i][j]);
            else
                printf("    ");
        }
        printf("\n");
    }

    return 0;
}

// Transpor a matriz criada no item 1, criando uma nova matriz e permutando as linhas pelas colunas.
// A linha 1 para coluna 1, linha 2 para coluna 2, linha “n” para coluna “n”. Imprimir a matriz transposta;

#include <stdio.h>

int main()
{
    const int linhas = 10;
    const int colunas = 10;
    double matriz[linhas][colunas], novaMatriz[linhas][colunas];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = i + (double)j / 10;
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%.1f ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            novaMatriz[j][i] = matriz[i][j];
        }
    }

    printf("Nova Matriz:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%.1f ", novaMatriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Solicitar que o usuário informe as dimensões de uma matriz, obrigatoriamente menor que 10 x 10.
// Copiar as últimas linhas e colunas da matriz do item 1 para dentro dessa nova matriz e exibir na tela;

#include <stdio.h>

int main()
{
    int linhas, colunas;

    do
    {
        printf("Digite o número de linhas (menor que 10): ");
        scanf("%d", &linhas);
    } while (linhas <= 0 || linhas >= 10);

    do
    {
        printf("Digite o número de colunas (menor que 10): ");
        scanf("%d", &colunas);
    } while (colunas <= 0 || colunas >= 10);

    double matriz[10][10];
    double novaMatriz[linhas][colunas];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matriz[i][j] = i + (double)j / 10;
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            novaMatriz[i][j] = matriz[10 - linhas + i][10 - colunas + j];
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%.1f ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Nova Matriz:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%.1f ", novaMatriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Criar uma matriz de caracteres 10 x 10 e inicializar todos os elementos com “·” (ASCII 250).
// Depois, alterar para o valor “X” os elementos das duas diagonais utilizando estruturas de repetição.
// Imprimir a matriz na tela;

#include <stdio.h>

int main()
{
    char matriz[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matriz[i][j] = (char)250;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        matriz[i][i] = 'X';
        matriz[i][10 - 1 - i] = 'X';
    }

    printf("Matriz:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

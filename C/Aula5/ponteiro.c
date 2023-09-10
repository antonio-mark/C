// Faça um programa que declare 4 arrays (char, short int, int e float) com
// 5 elementos cada. Inicialize os vetores com os valores 65, 66, 67, 68 e 69.
// Depois, liste o endereço e o conteúdo de cada elemento dos arrays.
// Observe os valores e endereços impressos.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arrayChar[] = {65, 66, 67, 68, 69};
    short int arrayShortInt[] = {65, 66, 67, 68, 69};
    int arrayInt[] = {65, 66, 67, 68, 69};
    float arrayFloat[] = {65, 66, 67, 68, 69};

    printf("Endereço e conteúdo do array char:\n");
    for (int i = 0; i < 5; i++)
        printf("Endereço: %p, Conteúdo: %c\n", &arrayChar[i], arrayChar[i]);

    printf("\nEndereço e conteúdo do array short int:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Endereço: %p, Conteúdo: %d\n", &arrayShortInt[i], arrayShortInt[i]);
    }

    printf("\nEndereço e conteúdo do array int:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Endereço: %p, Conteúdo: %d\n", &arrayInt[i], arrayInt[i]);
    }

    printf("\nEndereço e conteúdo do array float:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Endereço: %p, Conteúdo: %f\n", &arrayFloat[i], arrayFloat[i]);
    }

    return 0;
}

// Desenvolva o método “void ajustaTexto(char *txtIN)” que recebe um
// texto como referência e garanta que somente a primeira letra desse
// texto seja maiúscula e as demais sejam minúsculas.
// Retorne o texto ajustado para o chamador no mesmo parâmetro de entrada.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ajustaTexto(char *txtIN)
{
    txtIN[0] = toupper(txtIN[0]);

    for (int i = 1; txtIN[i] != '\0'; i++)
        txtIN[i] = tolower(txtIN[i]);
}

int main()
{
    char texto[] = "tExTo";

    printf("Texto original: %s\n", texto);

    ajustaTexto(texto);

    printf("Texto ajustado: %s\n", texto);

    return 0;
}

// Converta o método desenvolvido anteriormente para uma função, para
// que devolva o texto como uma string sem modificar o parâmetro de
// entrada. Ex: “char *ajustaTexto(char *txtIN)”

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *ajustaTexto(const char *txtIN)
{
    int tamanho = strlen(txtIN);
    char *copia = (char *)malloc(sizeof(char) * (tamanho + 1));
    // Não usar "char copia[strlen(txtIN) + 1];", pois está retornando um ponteiro para uma variável local,
    // que é a variável copia. Isso pode levar a comportamento indefinido, uma vez que a variável local
    // copia deixa de existir após a função ser concluída, e o ponteiro retornado apontará
    // para uma área de memória inválida. Variáveis locais criadas dentro de uma função
    // são destruídas assim que a função retorna, e retornar um ponteiro para uma
    // variável local resultará em um comportamento indefinido. Use alocação dinâmica ou static.

    strcpy(copia, txtIN);

    copia[0] = toupper(copia[0]);

    for (int i = 1; i < tamanho; i++)
        copia[i] = tolower(copia[i]);

    return copia;
}

int main()
{
    const char texto[] = "exemplo de tEXto";

    printf("Texto original: %s\n", texto);

    char *textoAjustado = ajustaTexto(texto);

    printf("Texto ajustado via retorno: %s\n", textoAjustado);

    free(textoAjustado);

    return 0;
}

// Escreva um método void que recebe como parâmetro um ponteiro “A” com 10 inteiros armazenados nele.
// O método deve alterar o valor de cada posição multiplicando-os por 2.
// Os valores alterados devem ser impressos por um comando fora do método.

#include <stdio.h>

void pointA(int *A)
{
    for (int i = 0; i < 10; i++)
        A[i] *= 2;
    // *(A + i) *= 2;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Array\n");
    for (int i = 0; i < sizeof(A) / sizeof(int); i++)
        printf("%d\n", A[i]);

    pointA(A);

    printf("Array multiplicado por 2\n");
    for (int i = 0; i < sizeof(A) / sizeof(int); i++)
        printf("%d\n", A[i]);

    return 0;
}

// Escreva um método que recebe um array de inteiros e retorne o elemento de maior valor e
// o elemento de menor valor. O método deve retornar os dois valores ao “main()”, onde devem ser impressos na tela

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

// void retornaValores(int arr[], int tamanho, int *maximo, int *minimo)
// {
//     *maximo = *minimo = arr[0];

//     for (int i = 1; i < tamanho; i++)
//     {
//         if (arr[i] > *maximo)
//             *maximo = arr[i];
//         if (arr[i] < *minimo)
//             *minimo = arr[i];
//     }
// }

int *retornaValores(int array[])
{
    int maximo = INT_MIN, minimo = INT_MAX;

    for (int i = 0; i < 10; i++)
    {
        if (array[i] > maximo)
            maximo = array[i];

        if (array[i] < minimo)
            minimo = array[i];
    }

    static int arrayMinMax[2]; // or int *arrayMinMax = (int *)malloc(2 * sizeof(int));

    arrayMinMax[0] = maximo;
    arrayMinMax[1] = minimo;

    return arrayMinMax;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *B = retornaValores(A);

    printf("Maior valor do array: %d\n", B[0]);
    printf("Menor valor do array: %d", B[1]);

    // free(B);

    return 0;
}

// Crie um array “A” com “n” inteiros, onde “n” é um valor inteiro fornecido
// pelo usuário. O vetor só deve ser alocado na memória depois que o usuário fornecer o valor de “n”.
// Alimente esse vetor com os primeiros “n” múltiplos de 10 e imprima na tela.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Informe o valor de 'n': ");
    scanf("%d", &n);

    int *A = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        A[i] = (i + 1) * 10;
        // *(A + i) = (i + 1) * 10;
    }

    printf("Valores do array A:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);

    free(A);

    return 0;
}

#include <stdio.h>
#include <string.h>

const char alfabeto[] = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
    't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
    'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4',
    '5', '6', '7', '8', '9', ' ', '.'};

const int tamanho = sizeof(alfabeto) / sizeof(char);

void mostrarAlfabeto();
// void solicitarChave();
// void solicitarTexto();
// void criptografar();
// void descriptografar();
void mostrarAutor();

int main()
{
    int opcao;
    char matriz[tamanho][tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
            matriz[i][j] = alfabeto[(j - i + tamanho) % tamanho];
    }

    do
    {
        printf("\n::CIFRA DE VIGENERE::\n\n");
        printf("1 - Mostrar alfabeto\n");
        printf("2 - Solicitar uma chave\n");
        printf("3 - Solicitar um texto\n");
        printf("4 - Criptografar\n");
        printf("5 - Descriptografar\n");
        printf("6 - Informações\n");
        printf("7 - Sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            mostrarAlfabeto();
            break;
        case 2:
            // solicitarChave();
            break;
        case 3:
            // solicitarTexto();
            break;
        case 4:
            // criptografar();
            break;
        case 5:
            // descriptografar();
            break;
        case 6:
            mostrarAutor();
            break;
        case 7:
            printf("\nPrograma encerrado.\n");
            break;
        default:
            printf("\nOpção inválida, insira novamente!\n");
            break;
        }
    } while (opcao != 7);

    return 0;
}

void mostrarAlfabeto()
{
    printf("\nALFABETO\n");

    char traco[tamanho * 2];
    for (int i = 0; i < tamanho * 2; i++)
        traco[i] = '-';

    printf("%s\n", traco);

    for (int i = 0; i < tamanho; i++)
        printf("%c ", alfabeto[i]);
    printf("\n");

    printf("%s\n", traco);
}

void mostrarAutor()
{
    char nome[] = {"Autor: Antonio B. Neto"};

    printf("\n%s\n", nome);

    for (int i = 0; i < strlen(nome); i++)
        printf("-");

    printf("\n");
}
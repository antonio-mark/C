#include <stdio.h>
#include <string.h>

const char alfabeto[] = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
    't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
    'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4',
    '5', '6', '7', '8', '9', ' ', '.', '\0'};

const int tamanhoAlfabeto = sizeof(alfabeto) / sizeof(char) - 1;
const int tamanhoChave = 40;
const int tamanhoTexto = 200;

void mostrarAlfabeto();
void solicitarEntrada(char *str, const char *tipo, const int tamanhoMaximo, const int tamanhoMinimo);
void criptografar(const char *texto, const char *chave, const char matriz[tamanhoAlfabeto][tamanhoAlfabeto]);
// void descriptografar();
void mostrarAutor();

int validarEntrada(char *str, const int tamanhoMinimo);
int validarStringVazia(const char *chave, const char *texto);

int main()
{
    int opcao;
    char matriz[tamanhoAlfabeto][tamanhoAlfabeto];
    char chave[tamanhoChave];
    char texto[tamanhoTexto];

    chave[0] = '\0';
    texto[0] = '\0';

    for (int i = 0; i < tamanhoAlfabeto; i++)
    {
        for (int j = 0; j < tamanhoAlfabeto; j++)
            matriz[i][j] = alfabeto[(j - i + tamanhoAlfabeto) % tamanhoAlfabeto];
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
            solicitarEntrada(chave, "chave", tamanhoChave, 4);
            break;
        case 3:
            solicitarEntrada(texto, "texto", tamanhoTexto, 8);
            break;
        case 4:
            criptografar(chave, texto, matriz);
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

    char traco[tamanhoAlfabeto * 2];
    for (int i = 0; i < tamanhoAlfabeto * 2; i++)
        traco[i] = '-';

    printf("%s\n", traco);

    for (int i = 0; i < tamanhoAlfabeto; i++)
        printf("%c ", alfabeto[i]);
    printf("\n");

    printf("%s\n", traco);
}

void solicitarEntrada(char *str, const char *tipo, const int tamanhoMaximo, const int tamanhoMinimo)
{
    int isValid;

    while (getchar() != '\n')
        ;

    do
    {
        printf("\nEscreva um(a) %s (mínimo %d caracteres): ", tipo, tamanhoMinimo);
        fgets(str, tamanhoMaximo, stdin);
        isValid = validarEntrada(str, tamanhoMinimo);

        if (!isValid)
            printf("\n%s inválido(a), digite novamente.", tipo);

    } while (!isValid);

    printf("\n%s salvo(a) com sucesso!\n", tipo);
}

void criptografar(const char *chave, const char *texto, const char matriz[tamanhoAlfabeto][tamanhoAlfabeto])
{
    if (!validarStringVazia(chave, texto))
        return;

    int tamanhoTexto = strlen(texto);
    char textoCriptografado[tamanhoTexto];
    // o caracrere da mensagem está nas colunas e a chave está nas linhas

    int indexChave, indexTexto;
    for (int index = 0; index < tamanhoTexto; index++)
    {

        for (int i = 0; i < tamanhoAlfabeto; i++)
        {
            if (chave[index] == matriz[i][0])
            {
                indexChave = i; // Encontrou a chave na linha i
                break;
            }
        }

        for (int j = 0; j < tamanhoAlfabeto; j++)
        {
            if (texto[index] == matriz[0][j])
            {
                indexTexto = j; // Encontrou o texto na coluna j
                break;
            }
        }

        textoCriptografado[index] = matriz[indexChave][indexTexto];
    }

    printf("%s", textoCriptografado);
}

void mostrarAutor()
{
    char nome[] = {"Autor: Antonio B. Neto"};

    printf("\n%s\n", nome);

    for (int i = 0; i < strlen(nome); i++)
        printf("-");

    printf("\n");
}

// MÉTODOS AUXILIARES

int validarEntrada(char *str, const int tamanhoMinimo)
{
    char *verificador;
    int tamanhoEntradaDigitada;

    tamanhoEntradaDigitada = strlen(str) - 1;

    str[tamanhoEntradaDigitada] = '\0';

    for (int i = 0; i < tamanhoEntradaDigitada; i++)
    {
        verificador = strchr(alfabeto, str[i]);
        if (verificador == NULL)
            break;
    }

    if (tamanhoEntradaDigitada < tamanhoMinimo || verificador == NULL)
        return 0;

    return 1;
}

int validarStringVazia(const char *chave, const char *texto)
{
    int isValid = 1;
    int tamanhoChave = strlen(chave);
    int tamanhoTexto = strlen(texto);

    if (tamanhoChave == 0 && tamanhoTexto == 0)
    {
        printf("\nChave e Texto não informados!\n");
        isValid = 0;
    }
    else if (tamanhoChave == 0 && tamanhoTexto != 0)
    {
        printf("\nChave não informada!\n");
        isValid = 0;
    }
    else if (tamanhoChave != 0 && tamanhoTexto == 0)
    {
        printf("\nTexto não informado!\n");
        isValid = 0;
    }

    return isValid;
}
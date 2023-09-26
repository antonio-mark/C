#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* toCamelCase(const char* texto)
{
    int tamanho = strlen(texto);
    char *textoFormatado = (char *)malloc(sizeof(char) * (tamanho + 1));

    textoFormatado[0] = tolower(textoFormatado[0]);

    for (int i = 0; i < tamanho; i++)
        if (texto[i] == ' ')
        {
            textoFormatado[i] = toupper(texto[i + 1]);
            i++;
        } else 
            textoFormatado[i] = tolower(texto[i]);
    
    textoFormatado[tamanho] = '\0';
    
    return textoFormatado;
}

int main()
{
    char texto[150];

    printf("Digite uma palavra: ");
    gets(texto);

    char *textoFormatado = toCamelCase(texto);

    printf("Original: %s", texto);
    printf("\nModificada: %s", textoFormatado);

    free(textoFormatado);

    return 0;
}
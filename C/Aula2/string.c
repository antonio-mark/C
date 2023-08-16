// Declare um array de char com tamanho 100 e o inicialize com uma frase
// digitada pelo usuário. Em seguida, mostre na tela a capacidade de
// armazenamento total do array e a quantidade de caracteres da frase digitada

#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];

    printf("Digite uma frase: ");
    gets(frase);

    puts(frase);

    size_t tamanho = strlen(frase);

    printf("Capacidade total do array: %lu\n", sizeof(frase));
    printf("Quantidade de caracteres da frase é %d", tamanho);

    return 0;
}

// Receba duas palavras através do teclado e mostre na tela se ambas são iguais
// ou se a primeira é anterior ou posterior à segunda conforme a ordem alfabética

#include <stdio.h>
#include <string.h>

int main()
{
    char primeiraPalavra[20];
    char segundaPalavra[20];

    printf("Digite uma palavra: ");
    scanf("%s", primeiraPalavra);

    printf("Digite outra palavra: ");
    while (getchar() != '\n')
        ;
    scanf("%s", segundaPalavra);

    int resultado = strcmp(primeiraPalavra, segundaPalavra);

    if (resultado == 0)
    {
        printf("Ambas palavras são iguais!");
    }
    else if (resultado < 0)
    {
        printf("A %s é alfabeticamente anterior a %s", primeiraPalavra, segundaPalavra);
    }
    else
    {
        printf("A %s é alfabeticamente posterior a %s", primeiraPalavra, segundaPalavra);
    }

    return 0;
}

// Declare 3 variáveis e as inicialize com um nome, uma cidade e uma profissão.
// Em seguida, declare e alimente uma quarta variável montando uma nova frase com esses 3 elementos.
// Por fim, imprima a frase. Utilize a função strcat. Experimente também a função sprintf

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[] = "Antonio";
    char cidade[] = "Porto Alegre";
    char profissao[] = "Pentester";

    char frase[200];

    // strcat(frase, "O seu nome é ");
    // strcat(frase, nome);
    // strcat(frase, " e mora em ");
    // strcat(frase, cidade);
    // strcat(frase, " e trabalha como ");
    // strcat(frase, profissao);
    // strcat(frase, " ");

    sprintf(frase, "O seu nome é %s e mora em %s e trabalha como %s", nome, cidade, profissao);

    printf("%s", frase);

    return 0;
}

// A partir de dois textos armazenados nas variáveis “frase” e “palavra”,
// identifique se “palavra” está contida na “frase”

#include <stdio.h>
#include <string.h>

int main()
{
    char frase[] = "oi zézinho";
    char palavra[] = "oie";

    if (strstr(frase, palavra) != NULL)
    {
        printf("Palavra '%s' está em '%s'", palavra, frase);
    }
    else
    {
        printf("Palavra '%s' não está em '%s'", palavra, frase);
    }

    return 0;
}
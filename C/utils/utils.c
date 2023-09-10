//  %d or %i = Um número inteiro decimal ou inteiro assinado
//  %c = Caractere assinado
//  %f = Número de ponto flutuante assinado
//  %e = Um número de ponto flutuante
//  %s = Uma string ou sequência de caracteres
//  %lf = Número de ponto flutuante de precisão dupla (double)
//  %Lf = Número de ponto flutuante de precisão estendida (long double)
//  %o = Número inteiro octal
//  %u = Número inteiro não assinado curto
//  %ld = Número inteiro decimal longo
//  %x = Número inteiro hexadecimal
//  %p = Mostra o endereço de memória no formato hexadecimal

//  %.2f = número fracionário com 2 casas decimais
//  %15.f = número alinhado a direita
//  %04d = zeros à esquerda do número
//  %10c = alinhamento a esquerda
//  %-10c = alinhamento a direita

//  printf("%15.f\n", numero); Saída:           123
//  printf("%15f\n", numero);  Saída:   123.45678789

// %c precisa de &, assim como todos outros formatadores, tirando o %s,
// pois o nome do array age como um ponteiro.

//  \n = Nova linha
//  \t = Tab horizontal
//  \v = Tab vertical
//  \f = Nova página
//  \b = Backspace
//  \r = Retorna cursor para início da linha

// Entrada de Dados

// • C
//  scanf(formato, arg1, arg2);
//  int a = getchar();

//  #include <string.h>
//  strlen(): Retorna o comprimento de uma string.
//  strcpy(): Copia uma string para outra.
//  strcat(): Concatena duas strings.
//  strcmp(): Compara duas strings.
//  strchr(): Encontra a primeira ocorrência de um caractere em uma string.
//  strstr(): Encontra a primeira ocorrência de uma substring em uma string.
//  strtok(): Divide uma string em tokens com base em um delimitador.

//  #include <stdlib.h>
//  atoi() : Converte uma string para um inteiro.
//  atof() : Converte uma string para um double.
//  itoa() : Converte um inteiro para uma string.
//  strtol() : Converte uma string para um long int.
//  strtod() : Converte uma string para um double.

// Aceita entrada de texto com e sem espaçamento. gets(param)
//  gets(strA);
//  or scanf("%s", strA);

// Saida de texto com puts() passando como parâmetro a variável string. puts(param)
//  puts(strA);
//  or printf("%s", strA);

// Essa linha de código é usada para descartar todos os caracteres restantes no buffer de entrada
// após uma leitura. Isso é útil para evitar problemas quando você precisa ler mais entrada posteriormente.
//  while (getchar() != '\n');

//  #include <math.h>
//  pow(base, exponent) : Calcula e retorna o valor da base elevada ao expoente.
//  sqrt(x) : Calcula e retorna a raiz quadrada do número x.
//  sin(x) : Calcula e retorna o seno do ângulo x.
//  cos(x) : Calcula e retorna o cosseno do ângulo x.
//  tan(x) : Calcula e retorna a tangente do ângulo x.
//  exp(x) : Calcula e retorna o valor da exponencial elevada à potência x.
//  log(x) : Calcula e retorna o logaritmo natural (base e) do número x.
//  log10(x) : Calcula e retorna o logaritmo na base 10 do número x.
//  floor(x) : Arredonda para baixo. Retorna o maior número inteiro menor ou igual a x.
//  ceil(x) : Arredonda para cima. Retorna o menor número inteiro maior ou igual a x.
//  fabs(x) : Retorna o valor absoluto (módulo) do número x.

//  #include <ctype.h>
//  isupper(ch) : Retorna se string ou char está em uppercase.
//  islower(ch) : Retorna se string ou char está em lowercase.

// Endereços

// Na linguagem C, cada variável está associada a:
//  - um tipo (int, float, char)
//  - um nome (vInt, vFloat, letra)
//  - um valor (1, 2.55, 'a')
//  - um endereço (1200, 1202, 1206)

// Operadores

// O operador “&” à esquerda de um nome serve para retornar o ENDEREÇO de uma variável ou objeto.
//  - &i tem valor 1200
//  - &v tem valor 1202
//  - &f tem valor 1206

// O operador “*” à esquerda de um nome na declaração de uma variável indica que
// essa variável é um ponteiro (endereço ou referência).
//  - int *pi;

// O operador “*” à esquerda de um ponteiro durante a implementação do código fonte
// retorna o valor contido no endereço armazenado no ponteiro.
//  - printf("%d", *pi);

// Exemplo de Ponteiro em C
#include <stdio.h>
void main()
{
    int i;
    int *pi;
    pi = &i;

    // int i;
    // int *pi = &i;

    printf("Informe um inteiro: ");
    scanf("%d", pi);
    printf("\nValor de i: %d", *pi);
    printf("\nEndereco de i: %p\n", pi);
}

// Alocação Dinâmica (malloc/free)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pa = (int *)malloc(sizeof(int));
    float *pb = (float *)malloc(sizeof(float));
    char *pc = (char *)malloc(sizeof(char));

    printf(":: Ponteiros e endereços ::\n\n");
    printf("Informe a, b e c: ");

    scanf("%d %f %c", pa, pb, pc);

    printf("\nA: %p = %d", pa, *pa);
    printf("\nB: %p = %f", pb, *pb);
    printf("\nC: %p = %c\n\n", pc, *pc);

    // printf("\nA: %p = %d", (void *)pa, *pa);
    // printf("\nB: %p = %f", (void *)pb, *pb);
    // printf("\nC: %p = %c\n\n", (void *)pc, *pc);

    free(pa);
    free(pb);
    free(pc);

    return 0;
}

// OBS: Usei (void *) para fazer a conversão explícita dos ponteiros para void *, para que possam ser impressos
// usando %p no printf. Note que %p não é especificado pela linguagem C para tipos diferentes de ponteiros,
// mas a conversão para void * geralmente funciona.

// Alocação Dinâmica - String
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = (char *)malloc(sizeof(char) * 10);

    printf("Informe um texto: ");
    fgets(str, 10, stdin);
    printf("%s\n", str);

    free(str);
    return 0;
}

// Alocação Dinâmica - Array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int i, tam = 10;
    short int *val = (short int *)malloc(sizeof(short int) * tam);

    for (i = 0; i < tam; i++) // deve colocar 10 ou tam, pois sizeof retorna o tamanho do ponteiro em bytes.
    {
        *(val + i) = i;
        printf("%p - [%d] = %d\n", val + i, i, *(val + i));
        // printf("%p - [%d] = %d\n", (void *)(val + i), i, *(val + i));
    }

    free(val);

    return 0;
}

// Funções com ponteiros
void minhaFuncaoEnviaCopiaDosInteiros(int a, int b)
{
    a = 10;
    b = 20;
}

int main()
{
    int x = 5, y = 15;
    minhaFuncaoEnviaCopiaDosInteiros(x, y); // Agora, x é 5 e y é 15
}

void minhaFuncaoEnviaInteirosOriginais(int *a, int *b)
{
    *a = 10;
    *b = 20;
}

int main()
{
    int x = 5, y = 15;
    minhaFuncaoEnviaInteirosOriginais(&x, &y); // Agora, x é 10 e y é 20

    // int x = 5, y = 15;
    // int *px = &x;
    // int *py = &y;
    // minhaFuncaoEnviaInteirosOriginais(px, py); // Agora, x é 10 e y é 20
}

// static
// Quando você declara uma variável como static, ela é alocada na memória estática
// (ou seja, na seção de dados estáticos) em vez da pilha de chamadas de funções.
// Isso significa que a variável persiste durante toda a execução do programa e
// mantém seu valor entre chamadas de função.
// Ao declará-la como static, a variável permanece na memória durante toda a execução do programa,
// tornando possível retornar um ponteiro para ela e usá-la em outras partes do programa.
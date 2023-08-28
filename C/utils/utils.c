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

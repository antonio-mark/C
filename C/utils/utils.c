// %d or %i = Um número inteiro decimal ou inteiro assinado
// %c = Caractere assinado
// %f = Número de ponto flutuante assinado
// %e = Um número de ponto flutuante
// %s = Uma string ou sequência de caracteres
// %lf = Número de ponto flutuante de precisão dupla (double)
// %Lf = Número de ponto flutuante de precisão estendida (long double)
// %o = Número inteiro octal
// %u = Número inteiro não assinado curto
// %ld = Número inteiro decimal longo
// %x = Número inteiro hexadecimal
// %p = Mostra o endereço de memória no formato hexadecimal

// %.2f = número fracionário com 2 casas decimais
// %15.f = número alinhado a direita
// %04d = zeros à esquerda do número
// %10c = alinhamento a esquerda
// %-10c = alinhamento a direita

// printf("%15.f\n", numero); Saída:           123
// printf("%15f\n", numero);  Saída:   123.45678789

// %c precisa de &, assim como todos outros formatadores, tirando o %s,
// pois o nome do array age como um ponteiro.

// \n = Nova linha
// \t = Tab horizontal
// \v = Tab vertical
// \f = Nova página
// \b = Backspace
// \r = Retorna cursor para início da linha

// Entrada de Dados

// • C
//  scanf(formato, arg1, arg2);
//  int a = getchar();
// • C++
//  cin >> arg;
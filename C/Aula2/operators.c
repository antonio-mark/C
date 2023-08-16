// Implementar um programa que solicite dois números ao usuário e exiba na tela
// a soma, subtração, multiplicação, divisão

#include <stdio.h>

int main()
{
    int numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    float multiplicacao = numero1 * numero2;

    printf("A soma dos números é: %d\n", soma);
    printf("A subtração dos números é: %.3f\n", (float)subtracao);
    printf("A multiplicação dos números é: %.2f\n", multiplicacao);
    printf("A divisão dos números é: %d\n", numero1 / numero2);

    return 0;
}

// Implementar um programa que solicite um número ao usuário.
// Sendo este número uma temperatura em graus Celsius, faça um programa para converter
// esta temperatura em graus Fahrenheit e exiba o resultado na tela. F = C * 1.8 + 32

#include <stdio.h>

int main()
{
    double numero;

    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%lf", &numero);

    printf("A temperatura em graus Fahrenheit é: %.2lf °F", numero * 1.8 + 32);

    return 0;
}

// Implementar um programa que solicite um número ao usuário.
// Sendo este número uma temperatura em graus Fahrenheit, faça um programa para converter
// esta temperatura em graus Celsius e exiba o resultado na tela. C = (F - 32) / 1.8

#include <stdio.h>

int main()
{
    double numero;

    printf("Digite uma temperatura em graus Fahrenheit: ");
    scanf("%lf", &numero);

    printf("A temperatura em graus Celsius é: %.2lf °C", (numero - 32) / 1.8);

    return 0;
}

// Implementar um programa que solicite um número ao usuário.
// Sendo este número uma velocidade em km/h, faça um programa para converter
// esta velocidade em m/s e exiba o resultado na tela

#include <stdio.h>

int main()
{
    float numero;

    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &numero);

    printf("A velocidade em m/s é: %.2lf m/s", numero / 3.6);

    return 0;
}

// Implemente um programa que solicite ao usuário o valor de um calçado e o percentual de desconto.
// Em seguida, calcule o valor do desconto e o valor final a ser pago pelo calçado

#include <stdio.h>

int main()
{
    float valor, percentualDesconto, desconto, valorDesconto;

    printf("Digite o valor do calçado e seu percentual de desconto: ");
    scanf("%f%f", &valor, &percentualDesconto);

    desconto = percentualDesconto / 100;
    valorDesconto = valor * desconto;

    printf("O valor de desconto é: %.2lf\n", valorDesconto);
    printf("O valor final é: %.2lf", valor - valorDesconto);

    return 0;
}

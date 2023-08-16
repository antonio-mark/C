// Desenvolva um programa que solicite ao usuário o raio de um círculo e exiba o diâmetro,
// circunferência e a área deste círculo na tela

#include <stdio.h>
#include <math.h>

int main()
{
    float raio;

    printf("Digite o raio de um círculo: ");
    scanf("%f", &raio);

    printf("Diâmetro: %.2f\n", raio * 2);
    printf("Circunferência: %.2f\n", 2 * 3.14 * raio);
    printf("Área: %.2f\n", 3.14 * pow(raio, 2));

    return 0;
}

// Desenvolva um programa que solicite ao usuário a altura e a
// largura de um retângulo e exiba o perímetro e a área deste retângulo na tela

#include <stdio.h>
#include <math.h>

int main()
{
    float altura, largura;

    printf("Digite a altura de um retângulo: ");
    scanf("%f", &altura);

    printf("Digite a largura de um retângulo: ");
    scanf("%f", &largura);

    printf("Perímetro: %.2f\n", 2 * (altura + largura));
    printf("Área: %.2f\n", altura * largura);

    return 0;
}

// Desenvolva um programa que solicite ao usuário a base e a altura
// de um triângulo e exiba o valor da área deste triângulo na tela

#include <stdio.h>
#include <math.h>

int main()
{
    float base, altura;

    printf("Digite a altura de um triângulo: ");
    scanf("%f", &altura);

    printf("Digite a base de um triângulo: ");
    scanf("%f", &base);

    printf("Área: %.2f\n", (base * altura) / 2);

    return 0;
}

// Desenvolva um programa que solicite dois números ao usuário e
// que exiba o resultado do primeiro número elevado ao segundo, ou seja, potência

#include <stdio.h>
#include <math.h>

int main()
{
    int numero1, numero2;

    printf("Digite dois números\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);

    printf("Resultado do primeiro número elevado ao segundo: %.0f\n", pow(numero1, numero2));

    return 0;
}

// Desenvolva um programa que solicite dois números ao usuário.
// Estes números são os catetos de um triângulo retângulo. Sendo assim, apresente ao usuário:
// • Hipotenusa
// • Área
// • Perímetro
// • Seno
// • Cosseno
// • Tangente

#include <stdio.h>
#include <math.h>

int main()
{
    int catetoAdjacente, catetoOposto;

    printf("Digite o número do cateto adjacente: ");
    scanf("%d", &catetoAdjacente);
    printf("Digite o número do cateto oposto: ");
    scanf("%d", &catetoOposto);

    // sqrt(catetoAdjacente * catetoAdjacente + catetoOposto * catetoOposto)
    float hipotenusa = sqrt(pow(catetoAdjacente, 2) + pow(catetoOposto, 2));
    float area = (catetoAdjacente * catetoOposto) / 2;
    float perimetro = catetoAdjacente + catetoOposto + hipotenusa;
    float seno = catetoOposto / hipotenusa;
    float cosseno = catetoAdjacente / hipotenusa;
    float tangente = (float)catetoOposto / catetoAdjacente;

    printf("Hipotenusa: %.2f\n", hipotenusa);
    printf("Área: %.2f\n", area);
    printf("Perímetro: %.2f\n", perimetro);
    printf("Seno: %.2f\n", seno);
    printf("Cosseno: %.2f\n", cosseno);
    printf("Tangente: %.2f\n", tangente);

    return 0;
}

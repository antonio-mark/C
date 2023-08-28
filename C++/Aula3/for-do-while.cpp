// Desenvolva um programa que imprima na tela uma sequência
// com os “n” primeiros números naturais sem considerar o zero.
// Peça para o usuário informar o valor de “n” antes de gerar a sequência;

#include <iostream>

int main() {
    int n;

    std::cout << "Digite valor de n: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        std::cout << i << " ";
    }

    return 0;
}

// Desenvolva um programa que imprima na tela uma sequênciacom
// os “n” primeiros números naturais pares, considerando o zero.
// Peça para o usuário informar o valor de “n” antes de gerar asequência;

#include <iostream>

int main() {
    int n;

    std::cout << "Digite valor de n: ";
    std::cin >> n;

    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0)
            std::cout << i << " ";
    }

    return 0;
}

// Desenvolva um programa que imprima na tela uma sequência com os “n”
// primeiros números naturais ímpares.
// Peça para o usuário informar o valor de “n” antes de gerar a sequência;

#include <iostream>

int main() {
    int n;

    std::cout << "Digite valor de n: ";
    std::cin >> n;

    for (int i = 0; i <= n; i++) {
        if (i % 2 == 1)
            std::cout << i << " ";
    }

    return 0;
}


// Desenvolva um programa que solicite um número inteiro “n” e imprima na tela o seu fatorial.
// Fatorial é o produto dos números inteiros consecutivos de 1 até um dado inteiro “n”;

#include <iostream>

int main() {
    int n, resultado = 1;

    std::cout << "Digite valor de n: ";
    std::cin >> n;

    for (int i = n; i > 1; i--) {
        resultado *= i;
    }

    std::cout << resultado;

    return 0;
}


// Desenvolva um programa que imprima na tela uma sequência com os “n”
// primeiros números fracionários múltiplos de 0,5 iniciando em 1,5.
// Peça para o usuário informar o valor de “n” antes de gerar a sequência.Ex : “n” = 5;
// sequência = 1,5 2,0 2,5 3,0 3,5;

#include <iostream>

int main() {
    int n;
    float numero = 1.5;

    std::cout << "Digite valor de n: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << numero << " ";
        numero += 0.5;
    }

    return 0;
}

// Desenvolva um programa que imprima na tela uma sequência de “n” números fracionários,
// iniciando com um número “i” e sendo incrementados por um número “m”.
// Peça para o usuário informar os valores de “n”, “m” e “i” antes de gerar a sequência.
// Ex : “n” = 6, “m” = 0,3 e “i” = -1;
// sequência = -1,0 - 0,7 - 0,4 - 0,1 0,2 0,5;

#include <iostream>

int main() {
    int n;
    float m, i;

    std::cout << "Informe o valor de n: ";
    std::cin >> n;

    std::cout << "Informe o valor de m: ";
    std::cin >> m;

    std::cout << "Informe o valor de i: ";
    std::cin >> i;

    for (int j = 0; j < n; j++) {
        std::cout << " " << i;
        i += m;
    }

    return 0;
}

// Desenvolva um programa que solicite uma quantidade indeterminada de números positivos ao usuário,
// e ao digitar o número zero, calcule e informe:
// • A quantidade de números digitados
// • A quantidade de pares
// • A quantidade de ímpares
// • A soma destes números
// • A média aritmética
// • O maior número
// • O menor número

#include <iostream>

int main() {
    int numero, quantidade = 0, quantidadePares = 0, quantidadeImpares = 0;
    int soma = 0, maior = 0, menor = 0;
    float media = 0.0;

    std::cout << "Digite os números (digite 0 para encerrar):\n";

    while (true) {
        std::cout << "Digite um número: ";
        std::cin >> numero;

        if (numero == 0) {
            break;
        }

        quantidade++;
        soma += numero;

        if (quantidade == 1) {
            maior = numero;
            menor = numero;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }

        if (numero % 2 == 0) {
            quantidadePares++;
        } else {
            quantidadeImpares++;
        }
    }

    if (quantidade > 0) {
        media = static_cast<float>(soma) / quantidade;
    }

    std::cout << "Quantidade de números digitados: " << quantidade << std::endl;
    std::cout << "Quantidade de números pares: " << quantidadePares << std::endl;
    std::cout << "Quantidade de números ímpares: " << quantidadeImpares << std::endl;
    std::cout << "Soma dos números: " << soma << std::endl;
    std::cout << "Média aritmética: " << std::fixed << setprecision(2) << media << std::endl;
    std::cout << "Maior número: " << maior << std::endl;
    std::cout << "Menor número: " << menor << std::endl;

    return 0;
}


// Desenvolva um programa que imprima na tela as seguintes formas:
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// *
// * *
// * * *
// * * * *
// * * * * *

// * * * * *
// * * * *
// * * *
// * *
// *
// Obs.: Utilizando laços e estruturas de controle;

#include <iostream>

int main() {
    std::cout << "Primeira forma:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    std::cout << "\n";

    std::cout << "Segunda forma:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    std::cout << "\n";

    std::cout << "Terceira forma:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    return 0;
}

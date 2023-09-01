// Implemente um programa que define um array A[6] vazio.
// Em seguida, faça um laço que inicialize o array de forma dinâmica com os valores[2 4 6 8 10 12],
// utilizando uma fórmula matemática para calcular os valores.
// Nenhum elemento do array deve deixar de ser inicializado.
// Depois, faça outro laço que mostre todo o array na tela;

#include <iostream>

int main() {
    int A[6];  

    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
        A[i] = 2 * (i + 1);  
    }

    std::cout << "Array A: ";
    for (int i = 0; i < 6; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

// Implemente um programa que define um array B[10] vazio.
// Em seguida, faça um laço que inicialize o array de forma dinâmica com os
// valores[−1.5 −1 −0.5 0 0.5 1 1.5 2 2.5 3], utilizando uma fórmula matemática
// para calcular os valores. Nenhum elemento do array deve deixar de ser inicializado.
// Depois, faça outro laço que mostre todo o array na tela;

#include <iostream>

int main() {
    double B[10]; 

    for (int i = 0; i < 10; i++) {
        B[i] = -1.5 + 0.5 * i; 
    }

    std::cout << "Array B: ";
    for (int i = 0; i < 10; i++) {
        std::cout << B[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

// Crie um array com 10 elementos, mas inicialize apenas os 5 primeiros com o valor do
// próprio índice utilizando um laço. Imprima na tela o vetor completo e veja o que aparece;

#include <iostream>

int main() {
    int meuArray[10]; 

    for (int i = 0; i < 5; i++) {
        meuArray[i] = i; 
    }

    std::cout << "Array completo: ";
    for (int i = 0; i < 10; i++) {
        std::cout << meuArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

// Monte um programa que leia 10 números fracionários, os armazene em um array e
// em seguida mostre na tela:
// a. O índice e o conteúdo do elemento de menor valor;
// b. O índice e o conteúdo do elemento de maior valor;
// c. A diferença entre os elementos de maior e menor valor;

#include <iostream>

int main() {
    float A[10];
    int indiceMenor = 0, indiceMaior = 0;

    for (int i = 0; i < 10; i++) {
        std::cout << "Digite o número na posição " << i << " do array: ";
        std::cin >> A[i];

        if (A[i] < A[indiceMenor])
            indiceMenor = i;
        if (A[i] > A[indiceMaior])
            indiceMaior = i;
    }

    float diferenca = A[indiceMaior] - A[indiceMenor];

    std::cout << "\nElemento de menor valor:\nÍndice: " << indiceMenor << "\nValor: " << A[indiceMenor] << "\n";
    std::cout << "\nElemento de maior valor:\nÍndice: " << indiceMaior << "\nValor: " << A[indiceMaior] << "\n";
    std::cout << "\nDiferença entre o maior e o menor valor: " << diferenca << "\n";

    return 0;
}

// Monte um programa que leia 10 números inteiros positivos e os armazene em um
// array. Mostre os números na ordem inversa a que foram digitados;

#include <iostream>

int main() {
    const int tamanhoArray = 10;
    int numeros[tamanhoArray];

    std::cout << "Digite 10 números inteiros positivos:" << std::endl;
    for (int i = 0; i < tamanhoArray; i++) {
        std::cout << "Número " << i + 1 << ": ";
        std::cin >> numeros[i];

        while (numeros[i] <= 0) {
            std::cout << "Digite um número inteiro positivo válido: ";
            std::cin >> numeros[i];
        }
    }

    std::cout << "Números na ordem inversa:" << std::endl;
    for (int i = tamanhoArray - 1; i >= 0; i--) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

// Monte um programa que leia 10 números inteiros positivos e os armazene em um array.
// Crie um segundo vetor e o alimente com os valores em ordem inversa ao primeiro.
// Mostre ambos na tela, percorrendo do primeiro ao último elemento;

#include <iostream>

int main() {
    const int tamanhoArray = 10;
    int numeros[tamanhoArray];
    int numerosInvertidos[tamanhoArray];

    std::cout << "Digite 10 números inteiros positivos:" << std::endl;
    for (int i = 0; i < tamanhoArray; i++) {
        std::cout << "Número " << i + 1 << ": ";
        std::cin >> numeros[i];

        while (numeros[i] <= 0) {
            std::cout << "Digite um número inteiro positivo válido: ";
            std::cin >> numeros[i];
        }

        numerosInvertidos[tamanhoArray - 1 - i] = numeros[i];
    }

    std::cout << "Primeiro vetor:" << std::endl;
    for (int i = 0; i < tamanhoArray; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Segundo vetor (valores invertidos do primeiro vetor):" << std::endl;
    for (int i = 0; i < tamanhoArray; i++) {
        std::cout << numerosInvertidos[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

// Monte um programa que leia 10 números inteiros positivos e os armazene em um array.
// Reorganize o próprio array armazenando seus elementos em ordem inversa.
// Não utilize outro vetor para isso, use apenas uma variável auxiliar.
// Mostre o array na tela após a inversão dos elementos;

#include <iostream>

int main() {
    int A[10];

    for (int i = 0; i < 10; i++) {
        std::cout << "Digite o número " << i << ": ";
        std::cin >> A[i];
    }

    for (int i = 0; i < 5; i++) {
        int aux = A[i];
        A[i] = A[sizeof(A) / sizeof(A[0]) - 1 - i];
        A[sizeof(A) / sizeof(A[0]) - 1 - i] = aux;
    }

    std::cout << "\nArray após inversão dos elementos:\n";
    for (int i = 0; i < 10; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << "\n";

    return 0;
}

// Alimente um array com 10 números e o imprima. Peça para o usuário
// informar um número e o procure no array. Se encontrar, imprima o número lido e
// a(s) posição(ões) em que foi(foram) encontrado(s).Se não encontrar,
// imprima o número lido e a mensagem "NÃO ENCONTRADO";

#include <iostream>

int main() {
    int numeros[10];

    std::cout << "Digite 10 números:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << "Número " << i + 1 << ": ";
        std::cin >> numeros[i];
    }

    int numeroProcurado;
    std::cout << "\nDigite um número para procurar: ";
    std::cin >> numeroProcurado;

    bool encontrado = false;
    std::cout << "Número lido: " << numeroProcurado << std::endl;

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == numeroProcurado) {
            std::cout << "Encontrado na posição " << i << std::endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        std::cout << "NÃO ENCONTRADO" << std::endl;
    }

    return 0;
}

// Crie um programa que solicite ao usuário digitar 5 números fracionários e os armazene em um array A.
// Depois, solicite mais 5 números e armazene em um segundo array B.
// Mostre na tela as operações matemáticas soma, subtração, multiplicação e divisão,
// índice por índice dos vetores;

#include <iostream>

int main() {
    const int tamanhoArray = 5;
    double A[tamanhoArray];
    double B[tamanhoArray];

    std::cout << "Digite 5 números fracionários para o array A:" << std::endl;
    for (int i = 0; i < tamanhoArray; i++) {
        std::cout << "Número " << i + 1 << ": ";
        std::cin >> A[i];
    }

    std::cout << "Digite 5 números fracionários para o array B:" << std::endl;
    for (int i = 0; i < tamanhoArray; i++) {
        std::cout << "Número " << i + 1 << ": ";
        std::cin >> B[i];
    }

    std::cout << "\nOperações matemáticas entre os arrays A e B:\n";
    for (int i = 0; i < tamanhoArray; i++) {
        std::cout << "Soma (" << i << "): " << A[i] + B[i] << "\n";
        std::cout << "Subtração (" << i << "): " << A[i] - B[i] << "\n";
        std::cout << "Multiplicação (" << i << "): " << A[i] * B[i] << "\n";
        if (B[i] != 0) {
            std::cout << "Divisão (" << i << "): " << A[i] / B[i] << "\n";
        } else {
            std::cout << "Divisão (" << i << "): Não é possível dividir por zero.\n";
        }
    }

    return 0;
}

// Desafio: Monte um programa onde o usuário entra com o valor das diversas notas alcançadas
// por uma turma de alunos. O programa inicia perguntando o tamanho da turma e parte
// para a entrada de dados. A seguir, o programa deve ser capaz de exibir um histograma na tela,
// além de outras informações, conforme é mostrado a seguir:
// Obs 1 : Ao lado da menor e da maior nota, deve ser mostrado entre parênteses
// a quantidade de vezes que essa nota apareceu;
// Obs 2 : Por exemplo, na linha "7.1~8.0" os 5 “*” significam que 5 alunos
// alcançaram uma nota > 7.0 mas <= 8.0.

// Resultado da avaliação da turma:
// Menor nota: 2.1 (1x)
// Maior nota: 10.0 (2x)
// Média da turma: 6.5
// Histograma das notas:
// 0.0 ~ 3.0: ***
// 3.1 ~ 4.0: **
// 4.1 ~ 5.0: ****
// 5.1 ~ 6.0: *******
// 6.1 ~ 7.0: **********
// 7.1 ~ 8.0: *****
// 8.1 ~ 9.0: *
// 9.1 ~ 10.0: **

#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    int tamanhoTurma;
    
    cout << "Digite o tamanho da turma: ";
    cin >> tamanhoTurma;

    vector<double> notas(tamanhoTurma);

    cout << "Digite as notas dos alunos:" << endl;
    for (int i = 0; i < tamanhoTurma; i++) {
        cout << "Nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
    }

    double menorNota = *min_element(notas.begin(), notas.end());
    double maiorNota = *max_element(notas.begin(), notas.end());

    double somaNotas = 0;

    for (int i = 0; i < tamanhoTurma; i++) 
        somaNotas += notas[i];
    
    double mediaTurma = somaNotas / tamanhoTurma;

    int histograma[8] = {0};

    for (int i = 0; i < tamanhoTurma; i++) {
        if (notas[i] >= 0.0 && notas[i] <= 3.0) {
            histograma[0]++;
        } else if (notas[i] <= 4.0) {
            histograma[1]++;
        } else if (notas[i] <= 5.0) {
            histograma[2]++;
        } else if (notas[i] <= 6.0) {
            histograma[3]++;
        } else if (notas[i] <= 7.0) {
            histograma[4]++;
        } else if (notas[i] <= 8.0) {
            histograma[5]++;
        } else if (notas[i] <= 9.0) {
            histograma[6]++;
        } else if (notas[i] <= 10.0) {
            histograma[7]++;
        }
    }

    cout << "Resultado da avaliação da turma:" << endl;
    cout << "Menor nota: " << fixed << setprecision(1) << menorNota << " (" << count(notas.begin(), notas.end(), menorNota) << "x)" << endl;
    cout << "Maior nota: " << fixed << setprecision(1) << maiorNota << " (" << count(notas.begin(), notas.end(), maiorNota) << "x)" << endl;
    cout << "Média da turma: " << fixed << setprecision(1) << mediaTurma << endl;
    cout << "Histograma das notas:" << endl;
    
    string faixas[8] = {"0.0 ~ 3.0:", "3.1 ~ 4.0:", "4.1 ~ 5.0:", "5.1 ~ 6.0:", "6.1 ~ 7.0:", "7.1 ~ 8.0:", "8.1 ~ 9.0:", "9.1 ~ 10.0:"};
    
    for (int i = 0; i < 8; i++) 
    {
        cout << faixas[i] << " ";
        
        for (int j = 0; j < histograma[i]; j++) 
            cout << "*";
        
        cout << endl;
    }

    return 0;
}

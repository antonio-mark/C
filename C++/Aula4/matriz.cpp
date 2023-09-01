// Criar uma matriz de números fracionários com 10 linhas e 10 colunas.
// Inicializar cada elemento da matriz com a parte inteira correspondente ao índice da linha
// e a parte fracionária correspondente ao índice da coluna.
// Imprimir a matriz na tela mostrando os números com uma casa decimal;

// Na matriz criada no item 1, percorrer a diagonal principal de[0][0] até [9][9] e mostrar os elementos na tela;
// Na matriz criada no item 1, percorrer a diagonal secundária de[0][9] até [9][0] e mostrar os elementos na tela;
// Na matriz criada no item 1, percorrer as bordas e mostrar os elementos na tela, em formato tabular;

#include <iostream>
#include <iomanip>

int main() {
    const int linhas = 10;
    const int colunas = 10;
    double matriz[linhas][colunas];

    // Inicializar a matriz com números fracionários
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = static_cast<double>(i) + static_cast<double>(j) / 10.0;
        }
    }

    // Imprimir a matriz com uma casa decimal
    std::cout << "Matriz:" << std::endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            std::cout << std::fixed << std::setprecision(1) << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Percorrer a diagonal principal e mostrar os elementos
    std::cout << "\nDiagonal Principal:" << std::endl;
    for (int i = 0; i < linhas; i++) {
        std::cout << std::fixed << std::setprecision(1) << matriz[i][i] << " ";
    }
    std::cout << std::endl;

    // Percorrer a diagonal secundária e mostrar os elementos
    std::cout << "\nDiagonal Secundária:" << std::endl;
    for (int i = 0; i < linhas; i++) {
        std::cout << std::fixed << std::setprecision(1) << matriz[i][colunas - 1 - i] << " ";
    }
    std::cout << std::endl;

    // Percorrer as bordas e mostrar os elementos em formato tabular
    std::cout << "\nBordas da Matriz:" << std::endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i == 0 || j == 0 || i == linhas - 1 || j == colunas - 1) {
                std::cout << std::fixed << std::setprecision(1) << matriz[i][j] << "\t";
            } else {
                std::cout << "     \t";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

// Transpor a matriz criada no item 1, criando uma nova matriz e permutando as linhas pelas colunas.
// A linha 1 para coluna 1, linha 2 para coluna 2, linha “n” para coluna “n”. Imprimir a matriz transposta;

#include <iostream>

int main() {
    const int linhas = 10;
    const int colunas = 10;
    double matriz[linhas][colunas];

    // Inicializar a matriz com números fracionários
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = static_cast<double>(i) + static_cast<double>(j) / 10.0;
        }
    }

    // Criar uma nova matriz transposta
    double matrizTransposta[colunas][linhas];

    // Preencher a matriz transposta trocando linhas por colunas
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizTransposta[j][i] = matriz[i][j];
        }
    }

    // Imprimir a matriz transposta
    std::cout << "Matriz Transposta:" << std::endl;
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            std::cout << std::fixed << std::setprecision(1) << matrizTransposta[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

// Solicitar que o usuário informe as dimensões de uma matriz, obrigatoriamente menor que 10 x 10.
// Copiar as últimas linhas e colunas da matriz do item 1 para dentro dessa nova matriz e exibir na tela;

#include <iostream>

int main() {
    int linhas, colunas;

    // Solicitar as dimensões da nova matriz ao usuário
    do {
        std::cout << "Digite o número de linhas (menor que 10): ";
        std::cin >> linhas;
    } while (linhas <= 0 || linhas >= 10);

    do {
        std::cout << "Digite o número de colunas (menor que 10): ";
        std::cin >> colunas;
    } while (colunas <= 0 || colunas >= 10);

    // Criar a matriz original com números fracionários como no item 1
    double matriz[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = static_cast<double>(i) + static_cast<double>(j) / 10.0;
        }
    }

    // Criar a nova matriz com as dimensões fornecidas pelo usuário
    double novaMatriz[10][10];

    // Copiar as últimas linhas e colunas da matriz original para a nova matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            novaMatriz[i][j] = matriz[10 - linhas + i][10 - colunas + j];
        }
    }

    // Exibir a nova matriz na tela
    std::cout << "\nNova Matriz:" << std::endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            std::cout << std::fixed << std::setprecision(1) << novaMatriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}


// Criar uma matriz de caracteres 10 x 10 e inicializar todos os elementos com “·” (ASCII 250).
// Depois, alterar para o valor “X” os elementos das duas diagonais utilizando estruturas de repetição.
// Imprimir a matriz na tela;

#include <iostream>

int main() {
    const int linhas = 10;
    const int colunas = 10;
    char matriz[linhas][colunas];

    // Inicializar a matriz com "·" (ASCII 250)
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = static_cast<char>(250);
        }
    }

    // Alterar os elementos das duas diagonais para "X"
    for (int i = 0; i < linhas; i++) {
        matriz[i][i] = 'X';
        matriz[i][linhas - 1 - i] = 'X';
    }

    // Imprimir a matriz na tela
    std::cout << "Matriz:" << std::endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

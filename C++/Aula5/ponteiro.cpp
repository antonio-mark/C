// Faça um programa que declare 4 arrays (char, short int, int e float) com
// 5 elementos cada. Inicialize os vetores com os valores 65, 66, 67, 68 e 69.
// Depois, liste o endereço e o conteúdo de cada elemento dos arrays.
// Observe os valores e endereços impressos.

#include <iostream>

int main() {
    char charArray[5] = {65, 66, 67, 68, 69};
    short int shortIntArray[5] = {65, 66, 67, 68, 69};
    int intArray[5] = {65, 66, 67, 68, 69};
    float floatArray[5] = {65.0f, 66.0f, 67.0f, 68.0f, 69.0f};

    std::cout << "Array de char:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Endereço: " << &charArray[i] << " - Conteúdo: " << charArray[i] << std::endl;
    }

    std::cout << "\nArray de short int:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Endereço: " << &shortIntArray[i] << " - Conteúdo: " << shortIntArray[i] << std::endl;
    }

    std::cout << "\nArray de int:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Endereço: " << &intArray[i] << " - Conteúdo: " << intArray[i] << std::endl;
    }

    std::cout << "\nArray de float:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Endereço: " << &floatArray[i] << " - Conteúdo: " << floatArray[i] << std::endl;
    }

    return 0;
}

// Desenvolva o método “void ajustaTexto(char *txtIN)” que recebe um
// texto como referência e garanta que somente a primeira letra desse
// texto seja maiúscula e as demais sejam minúsculas.
// Retorne o texto ajustado para o chamador no mesmo parâmetro de entrada.

#include <iostream>
#include <cctype> 

void ajustaTexto(char *txtIN) {
    txtIN[0] = std::toupper(txtIN[0]);

    for (int i = 1; txtIN[i] != '\0'; i++) 
        txtIN[i] = std::tolower(txtIN[i]);
}

int main() {
    char texto[] = "eXeMpLo De TeXtO";

    std::cout << "Texto original: " << texto << std::endl;
    ajustaTexto(texto);
    std::cout << "Texto ajustado: " << texto << std::endl;

    return 0;
}

// Converta o método desenvolvido anteriormente para uma função, para
// que devolva o texto como uma string sem modificar o parâmetro de
// entrada. Ex: “char *ajustaTexto(char *txtIN)”

#include <iostream>
#include <cctype> 
#include <string>
// #include <cstring> 

// char *ajustaTexto(const char *txtIN) {
//     if (txtIN == nullptr || txtIN[0] == '\0') {
//         return nullptr; // Tratamento de texto vazio ou nulo
//     }

//     // Crie uma cópia do texto de entrada
//     char *textoAjustado = strdup(txtIN);

//     textoAjustado[0] = std::toupper(textoAjustado[0]);

//     for (int i = 1; textoAjustado[i] != '\0'; i++) 
//         textoAjustado[i] = std::tolower(textoAjustado[i]);

//     return textoAjustado;
// }

std::string ajustaTexto(const std::string &txtIN) {
    std::string textoAjustado = txtIN;

    if (!textoAjustado.empty()) {
        textoAjustado[0] = std::toupper(textoAjustado[0]);

        for (size_t i = 1; i < textoAjustado.length(); i++) 
            textoAjustado[i] = std::tolower(textoAjustado[i]);
    }

    return textoAjustado;
}

int main() {
    std::string texto = "eXeMpLo De TeXtO";

    std::cout << "Texto original: " << texto << std::endl;
    std::string textoAjustado = ajustaTexto(texto);
    std::cout << "Texto ajustado: " << textoAjustado << std::endl;

    return 0;
}

// Escreva um método void que recebe como parâmetro um ponteiro “A” com 10 inteiros armazenados nele.
// O método deve alterar o valor de cada posição multiplicando-os por 2.
// Os valores alterados devem ser impressos por um comando fora do método.

#include <iostream>

void multiplicaPorDois(int *A) {
    for (int i = 0; i < 10; i++) 
        A[i] *= 2; 
}

int main() {
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Array original:\n";
    for (int i = 0; i < 10; i++) 
        std::cout << A[i] << " ";
  
    std::cout << std::endl;

    multiplicaPorDois(A);

    std::cout << "Array multiplicado por 2:\n";
    for (int i = 0; i < 10; i++) 
        std::cout << A[i] << " ";

    std::cout << std::endl;

    return 0;
}

// Escreva um método que recebe um array de inteiros e retorne o elemento de maior valor e
// o elemento de menor valor. O método deve retornar os dois valores ao “main()”, onde devem ser impressos na tela

#include <iostream>
#include <climits> 

// void encontraMaxMin(const int arr[], int tamanho, int &maximo, int &minimo) {
//     maximo = INT_MIN; 
//     minimo = INT_MAX; 

//     for (int i = 0; i < tamanho; i++) {
//         if (arr[i] > maximo) 
//             maximo = arr[i]; 

//         if (arr[i] < minimo) 
//             minimo = arr[i]; 
//     }
// }

// int main() {
//     int array[] = {42, 8, 17, 93, 64, 21, 38, 55};

//     int maximo, minimo;
//     encontraMaxMin(array, sizeof(array) / sizeof(array[0]), maximo, minimo);

//     std::cout << "Maior valor: " << maximo << std::endl;
//     std::cout << "Menor valor: " << minimo << std::endl;

//     return 0;
// }

int *retornaValores(int array[]) {
    int maximo = INT_MIN, minimo = INT_MAX;

    for (int i = 0; i < 10; i++) {
        if (array[i] > maximo)
            maximo = array[i];

        if (array[i] < minimo)
            minimo = array[i];
    }

    int *arrayMinMax = new int[2]; // static int arrayMinMax[2]; 

    arrayMinMax[0] = maximo;
    arrayMinMax[1] = minimo;

    return arrayMinMax;
}

int main() {
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *B = retornaValores(A);

    std::cout << "Maior valor do array: " << B[0] << std::endl;
    std::cout << "Menor valor do array: " << B[1] << std::endl;

    // Se você alocou dinamicamente a memória com 'new', você deve liberá-la com 'delete[]'
    delete[] B;

    return 0;
}

// Crie um array “A” com “n” inteiros, onde “n” é um valor inteiro fornecido
// pelo usuário.O vetor só deve ser alocado na memória depois que o usuário fornecer o valor de “n”.
// Alimente esse vetor com os primeiros “n” múltiplos de 10 e imprima na tela

#include <iostream>

int main() {
    int n;

    std::cout << "Informe o valor de n: ";
    std::cin >> n;

    int *A = new int[n];

    for (int i = 0; i < n; i++) 
        A[i] = (i + 1) * 10; 
        // *(A + i) = (i + 1) * 10;

    std::cout << "Array A com os primeiros " << n << " múltiplos de 10:\n";

    for (int i = 0; i < n; i++) 
        std::cout << A[i] << " ";
    
    std::cout << std::endl;

    // Libera a memória alocada dinamicamente
    delete[] A;

    return 0;
}

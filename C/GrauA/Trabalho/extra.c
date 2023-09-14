const char alfabeto[] = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
    't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
    'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4',
    '5', '6', '7', '8', '9', ' ', '.'};

const int tamanho = sizeof(alfabeto) / sizeof(char);
char matriz[tamanho][tamanho];

int main()
{
    // for (int i = 0; i < tamanho; i++)
    // {
    //     for (int j = 0; j < tamanho; j++)
    //         matriz[i][j] = alfabeto[(j - i + tamanho) % tamanho];
    // }

    for (int i = 0; i < tamanho; i++)
    {
        matriz[0][i] = alfabeto[i];
    }

    for (int i = 1; i < tamanho; i++)
    {
        int indiceChar = tamanho - i;
        for (int j = 0; j < tamanho; j++)
        {
            matriz[i][j] = alfabeto[indiceChar];
            indiceChar++;
            if (indiceChar == tamanho)
                indiceChar = 0;
        }
    }
}

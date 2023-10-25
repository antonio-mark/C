// 1. Solicite ao usuário uma quantidade indeterminada de números inteiros. A
// cada solicitação, adicione o número em um vector. Quando o usuário
// digitar 0 (zero), deve varrer o vector usando iterator e listar todos os seus
// elementos um ao lado do outro, separados por um espaço. Não deve listar o zero;

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vetor;
    int n = 1;

    while (n != 0)
    {
       cout << "Digite um numero: ";
       cin >> n;
       vetor.push_back(n);
    }

    cout << '\n';
    vetor.pop_back();
    
    vector<int>::iterator it;
    for (it = vetor.begin(); it != vetor.end(); it++)
        cout << *it << ' ';

    cout << '\n';

    return 0;
}

// 2. Modifique o exercício anterior e mostre os elementos do vector na 
// ordem inversa a que foram digitados, usando iterator reverso;

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vetor;
    int n = 1;

    while (n != 0)
    {
       cout << "Digite um numero: ";
       cin >> n;
       vetor.push_back(n);
    }

    cout << '\n';
    vetor.pop_back();
    
    vector<int>::reverse_iterator rit;
    for (rit = vetor.rbegin(); rit != vetor.rend(); rit++)
        cout << *rit << ' ';

    cout << '\n';

    return 0;
}

// 3. Modifique o exercício anterior para varrer o vector e mostrar o menor
// número, o maior número e a média aritmética;

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vetor;
    int n = 1, maior, menor;
    float media;

    while (n != 0)
    {
       cout << "Digite um numero: ";
       cin >> n;
       vetor.push_back(n);
    }

    cout << '\n';
    vetor.pop_back();
    
    vector<int>::iterator it;
    menor = vetor.front();
    maior = vetor.front();
    for (it = vetor.begin(); it != vetor.end(); it++)
    {
        media += *it;
        
        if (menor > *it)
            menor = *it;
        
        if (maior < *it)
            maior = *it;
    }
    
    media = (float)media / vetor.size();

    cout << "O menor número: " << menor << endl;
    cout << "O maior número: " << maior << endl;
    cout << "A média : " << media << endl;

    return 0;
}

// 4. Modifique o exercício anterior para mostrar em uma linha os elementos
// com valor par e na linha abaixo os com valor ímpar. Os elementos pares
// devem ser apresentados na ordem inversa a que foram digitados, e os ímpares na ordem direta;

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vetor;
    int n = 1;

    while (n != 0)
    {
       cout << "Digite um numero: ";
       cin >> n;
       vetor.push_back(n);
    }

    cout << '\n';
    vetor.pop_back();
    
    vector<int>::reverse_iterator rit;
    for (rit = vetor.rbegin(); rit != vetor.rend(); rit++)
        if (*rit % 2 == 0)
            cout << *rit << ' ';

    cout << '\n';

    vector<int>::iterator it;
    for (it = vetor.begin(); it != vetor.end(); it++)
        if (*it % 2 != 0)
            cout << *it << ' ';

    cout << '\n';

    return 0;
}
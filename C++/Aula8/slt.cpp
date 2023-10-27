// 1) Declare uma estrutura list que armazena números inteiros e a alimente com 10 números
// informados pelo usuário. Em seguida, realize as operações utilizando métodos da própria STL:
// a) Mostre o menor valor;
// b) Mostre o maior valor;
// c) Ordene a lista em ordem crescente e mostre na tela, em uma única linha;
// d) Ordene a lista em ordem decrescente e mostre na tela, em uma única linha;
// e) Peça para o usuário digitar um número e o remova da lista. Mostre a lista em uma única linha;
// f) Elimine elementos duplicados e mostre a lista em uma única linha;

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> myList;
    list<int>::iterator pos;

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite um numero: ";
        int num;
        cin >> num;
        myList.push_back(num);
    }

    pos = min_element(myList.begin(), myList.end());
    cout << "Menor valor: " << *pos << endl;
    
    pos = max_element(myList.begin(), myList.end());
    cout << "Maior valor: " << *pos << endl;
    
    myList.sort();

    cout << "Lista ordenada em ordem crescente: ";
    for (const int& elem : myList) 
        cout << elem << " ";
    cout << endl;

    myList.sort(greater<int>());

    cout << "Lista ordenada em ordem decrescente: ";
    for (const int& elem : myList) 
        cout << elem << " ";
    cout << endl;

    int numToRemove;
    cout << "Digite um número para remover: ";
    cin >> numToRemove;
    myList.remove(numToRemove);

    // se fosse remover pelo indice informado. obs: somente com vector, list não é possivel.
    // myList.erase(myList.begin() + numToRemove);

    cout << "Lista com número removido: ";
    for (const int& elem : myList) 
        cout << elem << " ";
    cout << endl;

    myList.unique();

    cout << "Lista sem números duplicados: ";
    for (const int& elem : myList) 
        cout << elem << " ";
    cout << endl;
}


// 2) Declare uma estrutura deque que armazena caracteres e a alimente com 10 letras informadas pelo
// usuário. Caso a letra seja maiúscula, adicione no início da estrutura. 
// Caso seja minúscula, armazene no final. Em seguida, mostre na tela todas 
// as letras digitadas obedecendo a ordem de armazenamento no deque.

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<char> coll;

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite uma letra: ";
        char letra;
        cin >> letra;
        isupper(letra) ? coll.push_front(letra) : coll.push_back(letra);
    }

    for (int i = 0; i < coll.size(); ++i)
        cout << coll[i] << ' ';
    cout << endl;

    return 0;
}

// 3) Peça para o usuário digitar uma frase qualquer, com diversas palavras. Em seguida, crie uma
// estrutura map<char,int> e armazene na parte char as letras da frase, sem repetição. Na parte int
// correspondente a cada letra, armazene a quantidade de vezes que a letra aparece na frase.

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    typedef map<char, int> StringFloatMap;
    StringFloatMap coll;

    string frase;
    cout << "Digite uma frase: ";
    getline(cin, frase);

    for (char c : frase)
        if(isalpha(c))
            coll[c]++;

    StringFloatMap::iterator pos;
    
    for (pos = coll.begin(); pos != coll.end(); ++pos)
        cout << "key: \"" << pos->first << "\" "
                << "value: " << pos->second << endl;

    // for (const auto& par : coll) 
    //     cout << "Letra: " << par.first << ", Frequência: " << par.second << endl;

    return 0;
}
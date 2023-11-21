#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    string frase, palavra;
    vector<string> listaPalavras;
    vector<string>::reverse_iterator rit;

    cout << endl << "Digite uma frase com palavras separadas por espaços: ";
    getline(cin, frase);

    stringstream ss(frase);

    while (getline(ss, palavra, ' ')) 
        listaPalavras.push_back(palavra);
     
    for (string palavra : listaPalavras)
        if (palavra.size() <= 4)
            cout << palavra << ' ';
    
    cout << endl;

    for (rit = listaPalavras.rbegin(); rit != listaPalavras.rend(); rit++)
        if (rit->size() >= 5)
            cout << *rit << ' ';


    return 0;
}
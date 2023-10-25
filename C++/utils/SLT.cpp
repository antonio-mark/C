    //////////
    // Pair //
    //////////

    // Pair é um container simples associativo com uma tupla de dois elementos de dados ou objetos,
    // chamado de “first” e “second”, respectivamente. Par de chave e valor. Dicionário.

    #include <utility>
    #include <string>
    #include <iostream>
    using namespace std;
    
    int main()
    {
        pair<string, double> product1;
        pair<string, double> product2("Tomate", 2.35);
        pair<string, double> product3(product2);
        product1 = make_pair("Cebola", 0.99);
        product2.first = "Batata";
        product2.second = 3.98;
        cout << product1.first << " = $" << product1.second << '\n';
        cout << product2.first << " = $" << product2.second << '\n';
        cout << product3.first << " = $" << product3.second << '\n';

        return 0;
    }
        
    //////////////
    // Iterator //
    //////////////

    // Iterator é um objeto que aponta para algum elemento em um intervalo de elementos.
    // Permite que você percorra, leia, modifique e manipule os elementos em um contêiner.

    // EXEMPLO COM VECTOR (ARRAY)

    #include <iostream>
    #include <vector>

    int main() {
        std::vector<int> vec = {1, 2, 3, 4, 5};

        // Exemplo usando begin e end com loop for
        std::cout << "Usando begin e end:" << std::endl;
        for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

        // Exemplo usando rbegin e rend com loop for
        std::cout << "Usando rbegin e rend:" << std::endl;
        for (std::vector<int>::reverse_iterator rit = vec.rbegin(); rit != vec.rend(); ++rit) {
            std::cout << *rit << " ";
        }
        std::cout << std::endl;

        return 0;
    }

    // EXEMPLO COM STRING

    #include <iostream>
    using namespace std;

    int main()
    {
        string str = "String de teste";
        string::iterator it;

        for (it = str.begin(); it != str.end(); it++)
            cout << (char)toupper(*it);

        cout << '\n';

        return 0;
    }

    ////////////
    // Vector //
    ////////////

    // Vectors são contêineres de sequência que representam arrays que podem mudar de tamanho.
    // Porém, ao contrário de arrays, seu tamanho pode mudar dinamicamente, 
    // com o seu armazenamento sendo gerenciado automaticamente pelo contêiner,
    // isso faz com que os vectors consumam mais memória que arrays em troca dessa 
    // capacidade de gerenciar o armazenamento e crescer de forma dinâmica e eficiente.

    #include <iostream>
    #include <vector>

    int main() 
    {
        // Operador de atribuição (=)
        std::vector<int> vec1 = {1, 2, 3};
        std::vector<int> vec2;
        vec2 = vec1;

        // Operadores de igualdade e desigualdade (==, !=)
        std::vector<int> vec3 = {1, 2, 3};
        std::vector<int> vec4 = {1, 2, 3};
        if (vec3 == vec4) {
            std::cout << "Os vetores são iguais." << std::endl;
        }

        // Operadores de comparação (<, <=, >, >=)
        std::vector<int> vec5 = {1, 2, 3};
        std::vector<int> vec6 = {1, 2, 4};
        if (vec5 < vec6) {
            std::cout << "vec5 é menor que vec6." << std::endl;
        }

        // Métodos: at, back, front
        int element = vec1.at(2);  // Acessa o elemento na posição 2 (índice 2)
        int lastElement = vec1.back();  // Acessa o último elemento
        int firstElement = vec1.front();  // Acessa o primeiro elemento

        // Métodos: size, empty
        size_t size = vec1.size();  // Obtém o número de elementos no vetor
        bool isEmpty = vec1.empty();  // Verifica se o vetor está vazio

        // Métodos: push_back, pop_back
        vec1.push_back(4);  // Adiciona o valor 4 ao final do vetor
        vec1.pop_back();  // Remove o último elemento do vetor

        // Métodos: insert, erase, clear, swap
        std::vector<int> vec7 = {1, 2, 3, 4};
        vec7.insert(vec7.begin() + 2, 5);  // Insere o valor 5 na terceira posição
        vec7.erase(vec7.begin() + 1);  // Remove o elemento na segunda posição
        vec7.clear();  // Remove todos os elementos do vetor

        // Método resize
        vec7.resize(7, 0); // Aumenta o tamanho para 7 e preenche com zeros

        return 0;
    }

    // EXEMPLO UTILIZANDO VECTOR E FOR 

    #include <iostream>
    #include <vector>
    using namespace std;
    
    int main()
    {
        vector<int> meuvetor;
        
        for (int i = 1; i <= 5; i++)
            meuvetor.push_back(i);
        
        cout << "Vetor contem " << meuvetor.size() << " elementos:\n";
        
        for (int i = 0; i < meuvetor.size(); i++)
            cout << meuvetor.at(i) << ' ';
        
        cout << '\n';

        return 0;
    }

    // EXEMPLO UTILIZANDO VECTOR E ITERATOR

    #include <iostream>
    #include <vector>
    using namespace std;

    int main()
    {
        vector<int> meuvetor;
        
        for (int i = 1; i <= 5; i++)
            meuvetor.push_back(i);
        
        cout << "Vetor contem " << meuvetor.size() << " elementos:\n";
        
        vector<int>::iterator it;
        for (it = meuvetor.begin(); it != meuvetor.end(); it++)
            cout << *it << ' ';

        cout << '\n';

        return 0;
    }

    //////////////////
    // List e Slist //
    //////////////////

    // List: Implementação de uma lista duplamente encadeada 
    // Slist: Implementação de uma lista simplesmente encadeada

    #include <iostream>
    #include <list>
    using namespace std;
    
    int main()
    {
        list<char> coll;

        for (char c = 'a'; c <= 'z'; ++c)
            coll.push_back(c);

        while (!coll.empty())
        {
            cout << coll.front() << ' ';
            coll.pop_front();
        }

        cout << endl;
    }

    ///////////
    // Deque //
    ///////////

    // Deque: (double ended queue – “deck”) Um vector com inserção e remoção de dados 
    // no início e no fim da estrutura. Sem algumas garantias de 
    // iteração quando os dados são alterados.

    #include <iostream>
    #include <deque>
    using namespace std;

    int main()
    {
        deque<float> coll;

        for (int i = 1; i < 6; ++i)
            coll.push_back(i * 1.1);

        for (int i = 1; i < 6; ++i)
            coll.push_front(i * 1.1);

        for (int i = 0; i < coll.size(); ++i)
            cout << coll[i] << ' ';

        cout << endl;
        return 0;
    }

    /////////
    // Set //
    /////////

    // Um conjunto matemático, com operações de união, interseção, diferença e teste de inclusão.

    #include <iostream>
    #include <set>

    int main()
    {
        typedef std::set<int> IntSet;

        IntSet coll;
        coll.insert(3);
        coll.insert(1);
        coll.insert(5);
        coll.insert(4);
        coll.insert(1);
        coll.insert(6);
        coll.insert(2);

        IntSet::const_iterator pos;

        for (pos = coll.begin(); pos != coll.end(); ++pos)
            std::cout << *pos << ' ';

        std::cout << std::endl;
        return 0;
    }

    //////////////
    // Multiset //
    //////////////

    // Semelhante ao set, no entanto, permite registros duplicados

    /////////
    // Map //
    /////////

    // Um array associativo. Permite associar um dado a uma chave específica.

    #include <iostream>
    #include <map>
    #include <string>

    using namespace std;

    int main()
    {
        typedef map<string, float> StringFloatMap;
        StringFloatMap coll;

        coll["VAT"] = 0.15;
        coll["Pi"] = 3.1415;
        coll["an arbitrary number"] = 4983.223;
        coll["Null"] = 0;

        StringFloatMap::iterator pos;

        for (pos = coll.begin(); pos != coll.end(); ++pos)
            cout << "key: \"" << pos->first << "\" "
                 << "value: " << pos->second << endl;

        return 0;
    }

    //////////////
    // Multimap //
    //////////////

    // Semelhante ao map, no entanto, permite chaves duplicadas

    #include <iostream>
    #include <map>
    #include <string>

    using namespace std;

    int main()
    {
        typedef multimap<int, string> IntStringMMap;
        IntStringMMap coll;

        coll.insert(make_pair(5, "tagged"));
        coll.insert(make_pair(2, "a"));
        coll.insert(make_pair(1, "this"));
        coll.insert(make_pair(4, "of"));
        coll.insert(make_pair(6, "strings"));
        coll.insert(make_pair(1, "is"));
        coll.insert(make_pair(3, "multimap"));

        IntStringMMap::iterator pos;

        for (pos = coll.begin(); pos != coll.end(); ++pos)
            cout << pos->second << ' ';
            
        cout << endl;

        return 0;
    }

    /////////////////////////////////////////
    // Hash_[set, multiset, map, multimap] //
    /////////////////////////////////////////

    // Semelhante aos containers anteriores, no entanto, 
    // utiliza um Hash Table em sua implementação.


    ///////////////
    // Algorithm //
    ///////////////

    // A STL possui implementações de algoritmos de busca, classificação, etc.
    // Os algoritmos implementados no STL podem ser utilizados nos containers do STL.
    // https://cplusplus.com/reference/algorithm/

    #include <iostream>
    #include <vector>
    #include <algorithm>

    using namespace std;

    int main()
    {
        vector<int> coll;
        vector<int>::iterator pos;

        coll.push_back(2);
        coll.push_back(5);
        coll.push_back(4);
        coll.push_back(1);
        coll.push_back(6);
        coll.push_back(3);

        pos = min_element(coll.begin(), coll.end());
        cout << "min: " << *pos << endl;

        pos = max_element(coll.begin(), coll.end());
        cout << "max: " << *pos << endl;

        sort(coll.begin(), coll.end());
        for (pos = coll.begin(); pos != coll.end(); ++pos)
            cout << *pos << ' ';
        cout << endl;
        
        pos = find(coll.begin(), coll.end(), 3);
        reverse(pos, coll.end());
        for (pos = coll.begin(); pos != coll.end(); ++pos)
            cout << *pos << ' ';
        cout << endl;

        return 0;
    }


// ENTRADA E SAIDA DE DADOS
//  cin >> arg;  Entrada de Dados
//  cout << “Texto” << variavel << constante; Saida de Dados

// DECLARAÇÃO DE VARIAVEIS E PRINTS
//  int i = 1;
//  char c = 'A';
//  float f = 2.34;
//  cout << i << '\t' << c << '\t' << f << endl;

// CASTS
//  static_cast<int>(numeroFracionario) CAST FLOAT PARA INT
//  static_cast<char>(numero) CAST INT PARA CHAR

// INCLUDE OR USINGS NAMESPACES
    #include <iostream>
    #include <string> // include string 

    int main() 
    {
        std::string nome, sobrenome;

        std::cout << "Qual o seu nome completo?" << std::endl;
        std::cin >> nome >> sobrenome;

        std::cout << nome << " " << sobrenome << std::endl;

        return 0;
    }

    #include <iostream>
    using namespace std; // namespace std 

    int main ()
    {
        string nome, sobrenome;

        cout << "Qual o seu nome completo?" << endl;
        cin >> nome >> sobrenome;

        cout << nome << " " << sobrenome << endl;

        return 0;
    }

// DIFERENÇA ENTRE cin E getline()
//  cin >> str; // bom para char, int, float, tipos primitivos, etc.
//  getline(cin, str); // bom para linhas de textos.

// DEFINIÇAO E EXEMPLOS DE METODOS COM STRING
    #include <iostream>
    #include <string>

    int main() {
        std::string str = "Hello, world!";
        std::string str2 = "Goodbye";

        // Métodos de acesso aos caracteres
        char ch = str.at(0); // Acessa o caractere na posição 0.
        char backCh = str.back(); // Retorna o último caractere.
        char frontCh = str.front(); // Retorna o primeiro caractere.

        // Métodos de obtenção de informações
        int tamanho = str.size(); // Retorna o tamanho da string.
        bool vazia = str.empty(); // Verifica se a string está vazia.

        // Métodos de modificação
        str.append(" Welcome"); // Anexa " Welcome" ao final da string.
        str.push_back('!'); // Adiciona o caractere '!' no final.
        str.assign("Hi, there!"); // Substitui o conteúdo da string.
        str.insert(3, " how are you"); // Insere " how are you" na posição 3.
        str.erase(9, 4); // Remove 4 caracteres a partir da posição 9.
        str.replace(0, 3, "Hey"); // Substitui os primeiros 3 caracteres por "Hey".
        str.swap(str2); // Troca o conteúdo da string com "Goodbye".
        str.pop_back(); // Remove o último caractere.

        // Métodos de busca e manipulação
        std::string linha;
        std::getline(std::cin, linha); // Lê uma linha inteira.
        const char* cString = str.c_str(); // Retorna o ponteiro para uma representação C-style da string.
        size_t pos = str.find("world"); // Encontra a posição da primeira ocorrência de "world".
        std::string sub = str.substr(7, 5); // Retorna uma substring de 5 caracteres a partir da posição 7.
        int comp = str.compare("Hello"); // Compara a string com "Hello".

        return 0;
    }

// DEFINIÇAO E EXEMPLOS DE METODOS COM MATH
    #include <iostream>
    #include <cmath>
    
    int main() {
        double base = 2.0;
        double exponent = 3.0;
        double x = 16.0;
        double angle = 45.0; // ângulo em graus
    
        double power_result = pow(base, exponent); // Calcula e retorna o valor da base elevada ao expoente.
        std::cout << "pow(" << base << ", " << exponent << ") = " << power_result << std::endl;
    
        double sin_result = sin(angle * M_PI / 180.0); // Calcula e retorna o seno do ângulo x (em radianos). sin(angle) retorna sem ser em radius.
        std::cout << "sin(" << angle << " degrees) = " << sin_result << std::endl;
    
        double cos_result = cos(angle * M_PI / 180.0); // Calcula e retorna o cosseno do ângulo x (em radianos). cos(angle) retorna sem ser em radius.
        std::cout << "cos(" << angle << " degrees) = " << cos_result << std::endl;
    
        double tan_result = tan(angle * M_PI / 180.0); // Calcula e retorna a tangente do ângulo x (em radianos). tan(angle) retorna sem ser em radius.
        std::cout << "tan(" << angle << " degrees) = " << tan_result << std::endl;
    
        double exp_result = exp(x); // Calcula e retorna o valor da exponencial elevada à potência x.
        std::cout << "exp(" << x << ") = " << exp_result << std::endl;
    
        double log_result = log(x); // Calcula e retorna o logaritmo natural (base e) do número x.
        std::cout << "log(" << x << ") = " << log_result << std::endl;
    
        double log10_result = log10(x); // Calcula e retorna o logaritmo na base 10 do número x.
        std::cout << "log10(" << x << ") = " << log10_result << std::endl;
    
        double floor_result = floor(x); // Retorna o maior número inteiro menor ou igual a x.
        std::cout << "floor(" << x << ") = " << floor_result << std::endl;
    
        double ceil_result = ceil(x); // Retorna o menor número inteiro maior ou igual a x.
        std::cout << "ceil(" << x << ") = " << ceil_result << std::endl;
    
        double fabs_result = fabs(-x); // Retorna o valor absoluto (módulo) do número x.
        std::cout << "fabs(" << -x << ") = " << fabs_result << std::endl;
    
        return 0;
    }
    
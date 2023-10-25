    ////////////////
    // Construtor //
    ////////////////
    #include <iostream>

    using namespace std;

    class Objeto
    {
        int id;

    public:
        Objeto()
        {
            this->id = 0;
            cout << "Construtor padrão: ";
            cout << "id = " << this->id << endl;
        }

        Objeto(int id)
        {
            this->id = id;
            cout << "Construtor sobrecarga: ";
            cout << "id = " << this->id << endl;
        }
    };

    int main()
    {
        // Construtor padrão - alocação dinâmica
        Objeto *obj1 = new Objeto();

        // Construtor sobrecarga - alocação estática
        Objeto obj2 = Objeto(1);

        delete obj1;
    }

    ///////////////
    // Destrutor //
    ///////////////
    #include <iostream>

    using namespace std;

    class Objeto
    {
        int id;

    public:
        Objeto()
        {
            this->id = 0;
            cout << "Construtor padrão: ";
            cout << "id = " << this->id << endl;
        }

        Objeto(int id)
        {
            this->id = id;
            cout << "Construtor sobrecarga: ";
            cout << "id = " << this->id << endl;
        }
        
        ~Objeto() // chamado automaticamente quando sai da função em que o construtor foi chamado, como o main.
        {
            cout << "Destrutor: ";
            cout << "id = " << this->id << endl;
        }
        
    };

    int main()
    {
        // Construtor padrão - alocação dinâmica
        Objeto *obj1 = new Objeto();

        // Construtor sobrecarga - alocação estática
        Objeto obj2 = Objeto(1);

        delete obj1;
    }

    ////////////
    // Getter //
    ////////////

    #include <iostream>

    using namespace std;

    class Objeto
    {
        int tamanho;

    public:
        Objeto(int tamanho)
        {
            this->tamanho = tamanho;
        }

        int getTamanho()
        {
            return this->tamanho;
        }

    };

    int main()
    {
        Objeto obj1(-1);
        cout << "Tamanho obj1: " << obj1.getTamanho() << endl;

        Objeto obj2(5);
        cout << "Tamanho obj2: " << obj2.getTamanho() << endl;
    }

    ////////////
    // Setter //
    ////////////

    #include <iostream>

    using namespace std;

    class Objeto
    {
        int tamanho;

    public:
        Objeto(int tamanho)
        {
            this->tamanho = 0;
            this->setTamanho(tamanho);
        }

        int getTamanho()
        {
            return this->tamanho;
        }

        void setTamanho(int tamanho)
        {
            if (tamanho > 0)
                this->tamanho = tamanho;
            else
                cout << "Tamanho '" << tamanho << "' deve ser maior que zero!" << endl;
        }

    };

    int main()
    {
        Objeto obj1(-1);
        cout << "Tamanho obj1: " << obj1.getTamanho() << endl;

        Objeto obj2(5);
        cout << "Tamanho obj2: " << obj2.getTamanho() << endl;
    }

    // Sobrecarga de Métodos
    
    // Método para cálculo de área
    int CalculaArea();
    // Sobrecarga com assinatura distinta
    int CalculaArea(int base, int altura);
    // Não é sobrecarga, pois apenas mudou o tipo de retorno
    float CalculaArea(int base, int altura);
    // Sobrecarga com assinatura distinta
    float CalculaArea(float base, float altura);
    // Não é sobrecarga, pois mudou apenas os nomes dos parâmetros
    float CalculaArea(float altura, float base); 

    
    // EXEMPLO UTILIZANDO VECTOR DE OBJETOS COM ITERATOR

    #include <iostream>
    #include <vector>

    using namespace std;

    class Fruta
    {
    private:
        int id;
        string nome;
    public:
        Fruta(int id, string nome)
        {
            this->id = id;
            this->nome = nome;
        }
        ~Fruta()
        {
            cout << "Liberando " << this->nome << endl;
        }
        int getId()
        {
            return this->id;
        }
        string getNome()
        {
            return this->nome;
        }
    };

    int main()
    {
        vector<Fruta*> lst;
        vector<Fruta*>::iterator it;

        // Alimenta o vector com objetos
        lst.push_back(new Fruta(1, "Banana"));
        lst.push_back(new Fruta(2, "Abacate"));
        lst.push_back(new Fruta(3, "Laranja"));

        cout << "Quantidade: " << lst.size() << endl;

        // Percorre o vector e acessa os objetos
        for(it = lst.begin(); it != lst.end(); it++)
            cout << (*it)->getId() << " - " << (*it)->getNome() << endl;

        // Percorre o vector e libera os objetos
        for(it = lst.begin(); it != lst.end(); it++)
            delete *it;

        cout << "Quantidade: " << lst.size() << endl;

        // Limpa o vector
        lst.clear();

        cout << "Quantidade: " << lst.size() << endl;
        return 0;
    }


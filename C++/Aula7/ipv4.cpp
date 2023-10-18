// Crie uma classe que representa um endereço IPv4, tendo como
// atributos privados, os 4 octetos inteiros na faixa entre 0 e 255
// – Implemente os métodos de acesso Getter e Setter, com as validações e
// mensagens necessárias
// – O construtor padrão deve inicializar os 4 octetos com o valor 0
// – Uma sobrecarga do construtor deve receber como parâmetro os 4 octetos
// numéricos e armazená-los apenas se forem válidos
// – Outra sobrecarga do construtor deve receber como parâmetro uma string
// contendo o endereço IP. Avalie o IP informado e o armazene apenas se for
// válido
// – Método getIP(), que retorna uma string representando o IP com seus 4 octetos
// – No main, instancie 3 objetos IP usando os 3 construtores e os visualize usando
// o método getIP()
// – Faça testes com IPs inválidos

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Ipv4 {
private:
    int octet1;
    int octet2;
    int octet3;
    int octet4;

public:
    Ipv4() : octet1(0), octet2(0), octet3(0), octet4(0) {}

    Ipv4(int o1, int o2, int o3, int o4) {
        if (isValidOctet(o1) && isValidOctet(o2) && isValidOctet(o3) && isValidOctet(o4)) {
            this->octet1 = o1;
            this->octet2 = o2;
            this->octet3 = o3;
            this->octet4 = o4;
        } else {
            cout << "Endereço IP inválido." << endl;
        }
    }

    Ipv4(const string &ipAddress) {
        vector<int> octets;
        string octet;
        int numOctets = 0;

        for (char c : ipAddress) {
            if (c == '.') {
                if (numOctets < 4) {
                    octets.push_back(stoi(octet));
                    octet = "";
                    numOctets++;
                } else {
                    break; 
                }
            } else if (isdigit(c)) {
                octet += c;
            } else {
                cout << "Caractere inválido no endereço IP." << endl;
                return;
            }
        }

        if (numOctets == 3 && octet.length() > 0) 
            octets.push_back(stoi(octet));

        if (octets.size() == 4) {
            if (isValidOctet(octets[0]) && isValidOctet(octets[1]) && isValidOctet(octets[2]) && isValidOctet(octets[3])) {
                this->octet1 = octets[0];
                this->octet2 = octets[1];
                this->octet3 = octets[2];
                this->octet4 = octets[3];
            } else 
                cout << "Endereço IP inválido." << endl;
        } else 
            cout << "Endereço IP inválido." << endl;
    }

    int getOctet1() const { return this->octet1; }
    void setOctet1(int o1) { if (isValidOctet(o1)) this->octet1 = o1; }

    int getOctet2() const { return this->octet2; }
    void setOctet2(int o2) { if (isValidOctet(o2)) this->octet2 = o2; }

    int getOctet3() const { return this->octet3; }
    void setOctet3(int o3) { if (isValidOctet(o3)) this->octet3 = o3; }

    int getOctet4() const { return this->octet4; }
    void setOctet4(int o4) { if (isValidOctet(o4)) this->octet4 = o4; }

    string getIP() const {
        return to_string(getOctet1()) + "." +
        to_string(getOctet2()) + "." +
        to_string(getOctet3()) + "." +
        to_string(getOctet4());
    }

private:
    bool isValidOctet(int value) const {
        return (value >= 0) && (value <= 255);
    }
};

int main() {
    Ipv4 endereco1;
    cout << "Endereço 1: " << endereco1.getIP() << endl;

    Ipv4 endereco2(192, 168, 1, 1);
    cout << "Endereço 2: " << endereco2.getIP() << endl;

    Ipv4 endereco3("10.0.0.1");
    cout << "Endereço 3: " << endereco3.getIP() << endl;

    Ipv4 endereco4("256.0.0.1");

    return 0;
}

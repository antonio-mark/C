#include <iostream>

using namespace std;

class Retangulo {
    float base, altura;
public:
    void setBase(float base) {
        this->base = base;
    }
    float getBase() {
        return this->base;
    }
    void setAltura(float altura){
        this->altura = altura;
    }
    float getAltura() {
        return this->altura;
    }
    float area() {
        return this->base * this->altura;
    }
};

class Paralelepipedo {
    float base, altura, profundidade;
public:
    void setBase(float base) {
        this->base = base;
    }
    float getBase() {
        return this->base;
    }
    void setAltura(float altura){
        this->altura = altura;
    }
    float getAltura() {
        return this->altura;
    }
    void setProfundidade(float profundidade) {
        this->profundidade = profundidade;
    }
    float getProfundidade() {
        return this->profundidade;
    }
    float volume() {
        return this->base * this->altura * this->profundidade;
    }

};

int main()
{
    Retangulo r1;
    r1.setBase(10.0);
    r1.setAltura(8.5);
    cout << r1.getBase() << " x " << r1.getAltura() << " = " << r1.area() << endl;

    Retangulo *r2 = new Retangulo();
    r2->setBase(12.2);
    r2->setAltura(6.8);
    cout << r2->getBase() << " x " << r2->getAltura() << " = " << r2->area() << endl;
    delete r2;

    Paralelepipedo p1;
    p1.setAltura(9.0);
    p1.setBase(9.0);
    p1.setProfundidade(2.55);
    cout << p1.getBase() << " x " << p1.getAltura() << " x " << p1.getProfundidade() << " = " << p1.volume() << endl;

    return 0;
}
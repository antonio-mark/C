// Criar a classe “Contribuinte” para cálculo do imposto de renda simplificado
// • Deve possuir os atributos: Nome do contribuinte, ano de nascimento, renda mensal e número de
// dependentes
// • Deve possuir os métodos: Idade, renda anual, renda per capita mensal, base de cálculo,
// alíquota IR, alíquota IR efetiva, valor IR devido, imprimir
// • Cada dependente reduz o valor base de cálculo do imposto em R$189,59 por mês
// • Criar um programa que instancie um objeto e solicite que o usuário informe todos os atributos.
// Em seguida, deve fazer o cálculo do IR e imprimir todos os dados na tela

// • Base = Renda Mensal – Dependentes * Desconto
// IR = (Base x Alíquota Correspondente) – Dedução
//
//   De           Até           Alíquota            Dedução
// R$ 0,00      R$ 1.903,98     0,00%               R$ 0,00
// R$ 1.903,99  R$ 2.826,65     7,50%               R$ 142,80
// R$ 2.826,66  R$ 3.751,05     15,00%              R$ 354,80
// R$ 3.751,06  R$ 4.664,68     22,50%              R$ 636,13
// R$ 4.664,69  Sem Limite      27,50%              R$ 869,36

#include <iostream>
#include <ctime>

using namespace std;

time_t t = time(nullptr);
tm *pTInfo = localtime(&t);

class Contribuinte
{
  string nomeContribuinte;
  int anoNascimento, numeroDependentes;
  float rendaMensal;
public:
  Contribuinte(){}

  void setNomeContribuinte(string nomeContribuinte)
  {
    this->nomeContribuinte = nomeContribuinte;
  }

  void setAnoNascimento(int anoNascimento)
  {
    this->anoNascimento = anoNascimento;
  }

  void setNumeroDependentes(int numeroDependentes)
  {
    this->numeroDependentes = numeroDependentes;
  }

  void setRendaMensal(float rendaMensal)
  {
    this->rendaMensal = rendaMensal;
  }

  int idade()
  {
    return (1900 + pTInfo->tm_year) - this->anoNascimento;
  }

  float rendaAnual()
  {
    return this->rendaMensal * 12;
  }

  float rendaPerCapitaMensal()
  {
    return this->rendaMensal / (this->numeroDependentes + 1);
  }

  float baseCalculo()
  {
    float descontoDependentes = 189.59;
    return this->rendaMensal - numeroDependentes * descontoDependentes;
  }

  float calcularImposto() 
  {
    float base = baseCalculo();
    float aliquota, deducao;

    if (base <= 1903.98) {
        aliquota = 0.0;
        deducao = 0.0;
    } else if (base <= 2826.65) {
        aliquota = 0.075;
        deducao = 142.80;
    } else if (base <= 3751.05) {
        aliquota = 0.15;
        deducao = 354.80;
    } else if (base <= 4664.68) {
        aliquota = 0.225;
        deducao = 636.13;
    } else {
        aliquota = 0.275;
        deducao = 869.36;
    }

    float imposto_devido = (base * aliquota) - deducao;
    return (imposto_devido > 0) ? imposto_devido : 0.0;
  }

  float aliquotaIr() 
  {
    float base = baseCalculo();
    float aliquota;

    if (base <= 1903.98) {
        aliquota = 0.0;
    } else if (base <= 2826.65) {
        aliquota = 0.075;
    } else if (base <= 3751.05) {
        aliquota = 0.15;
    } else if (base <= 4664.68) {
        aliquota = 0.225;
    } else {
        aliquota = 0.275;
    }

    return aliquota * 100;
  }

  float aliquotaIrEfetiva() 
  {
    return (calcularImposto() / rendaAnual()) * 100; 
  }
  
  void imprimir()
  {
    cout << "Nome: " << this->nomeContribuinte << endl;
    cout << "Idade: " << this->idade() << " anos" << endl;
    cout << "Renda Mensal: R$ " << this->rendaMensal << endl;
    cout << "Número de Dependentes: " << this->numeroDependentes << endl;
    cout << "Renda Anual: R$ " << this->rendaAnual() << endl;
    cout << "Renda Per Capita Mensal: R$ " << this->rendaPerCapitaMensal() << endl;
    cout << "Base de Cálculo: R$ " << this->baseCalculo() << endl;
    cout << "Alíquota IR: " << this->aliquotaIr() << "%" << endl;
    cout << "Alíquota IR Efetiva: " << this->aliquotaIrEfetiva() << "%" << endl;
    cout << "Imposto de Renda Devido: R$ " << this->calcularImposto() << endl;
  }
};

int main()
{
  string nomeContribuinte;
  int anoNascimento, numeroDependentes;
  float rendaMensal;
  cout << "Qual o seu nome? ";
  getline(cin, nomeContribuinte);
  cout << "Qual o seu ano de nascimento? ";
  cin >> anoNascimento;
  cout << "Possui quantos dependentes? ";
  cin >> numeroDependentes;
  cout << "Qual a renda mensal? ";
  cin >> rendaMensal;

  cout << endl;

  Contribuinte c;
  c.setNomeContribuinte(nomeContribuinte);
  c.setAnoNascimento(anoNascimento);
  c.setNumeroDependentes(numeroDependentes);
  c.setRendaMensal(rendaMensal);

  c.imprimir();

  return 0;
}
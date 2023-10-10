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


// • Deve possuir os métodos: Idade, renda anual, renda per capita mensal, base de cálculo,
// alíquota IR, alíquota IR efetiva, valor IR devido, imprimir

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
};

int main()
{
  string nome, sobrenome, sexo;
  int idade;
  cout << "Qual o seu nome? ";
  getline(cin, nome);
  cout << "Qual o seu sobrenome? ";
  cin >> sobrenome;
  cout << "Qual o seu sexo? ";
  cin >> sexo;
  cout << "Qual a sua idade? ";
  cin >> idade;

  Pessoa p;
  p.setNome(nome);
  p.setSobrenome(sobrenome);
  p.setSexo(sexo);
  p.setIdade(idade);

  cout << "Nome: " << p.getNome() << endl;
  cout << "Sobrenome: " << p.getSobrenome() << endl;
  cout << "Sexo: " << p.getSexo() << endl;
  cout << "Idade: " << p.getIdade() << endl;
  cout << "Tamanho do nome: " << p.tamanhoDoNomeCompleto() << endl;

  return 0;
}
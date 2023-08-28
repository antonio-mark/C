// Crie um programa que exiba o nome do dia da semana, se é dia útil, fim de semana ou dia inválido.
// Considere que domingo é representado pelo número 1 e sábado pelo 7.
// Peça para o usuário informar o número correspondente ao dia.

#include <iostream>

int main() {
    int dia;

    std::cout << "Domingo - 1\n";
    std::cout << "Segunda - 2\n";
    std::cout << "Terça - 3\n";
    std::cout << "Quarta - 4\n";
    std::cout << "Quinta - 5\n";
    std::cout << "Sexta - 6\n";
    std::cout << "Sábado - 7\n";
    std::cout << "Informe o número referente ao dia: ";
    std::cin >> dia;

    switch (dia) {
        case 1:
            std::cout << "Domingo e fim de semana";
            break;
        case 2:
            std::cout << "Segunda e dia útil";
            break;
        case 3:
            std::cout << "Terça e dia útil";
            break;
        case 4:
            std::cout << "Quarta e dia útil";
            break;
        case 5:
            std::cout << "Quinta e dia útil";
            break;
        case 6:
            std::cout << "Sexta e dia útil";
            break;
        case 7:
            std::cout << "Sábado e fim de semana";
            break;
        default:
            std::cout << "Dia inválido!";
            break;
    }

    return 0;
}


// Crie um programa que receba um número entre 1 e 12 e mostre na tela as seguintes informações :
// • Nome do mês correspondente
// • Qual o semestre
// • Quantidade de dias
// • Estação do ano predominante

#include <iostream>

int main() {
    int mes;

    std::cout << "Informe o número referente ao mês (1 a 12): ";
    std::cin >> mes;

    switch (mes) {
        case 1:
            std::cout << "Mês: Janeiro\n";
            std::cout << "Semestre: 1º Semestre\n";
            std::cout << "Quantidade de dias: 31\n";
            std::cout << "Estação: Verão\n";
            break;
        case 2:
            std::cout << "Mês: Fevereiro\n";
            std::cout << "Semestre: 1º Semestre\n";
            std::cout << "Quantidade de dias: 28 ou 29\n";
            std::cout << "Estação: Verão\n";
            break;
        case 3:
            std::cout << "Mês: Março\n";
            std::cout << "Semestre: 1º Semestre\n";
            std::cout << "Quantidade de dias: 31\n";
            std::cout << "Estação: Outono\n";
            break;
        case 4:
            std::cout << "Mês: Abril\n";
            std::cout << "Semestre: 1º Semestre\n";
            std::cout << "Quantidade de dias: 30\n";
            std::cout << "Estação: Outono\n";
            break;
        case 5:
            std::cout << "Mês: Maio\n";
            std::cout << "Semestre: 1º Semestre\n";
            std::cout << "Quantidade de dias: 31\n";
            std::cout << "Estação: Outono\n";
            break;
        case 6:
            std::cout << "Mês: Junho\n";
            std::cout << "Semestre: 1º Semestre\n";
            std::cout << "Quantidade de dias: 30\n";
            std::cout << "Estação: Inverno\n";
            break;
        case 7:
            std::cout << "Mês: Julho\n";
            std::cout << "Semestre: 1º Semestre\n";
            std::cout << "Quantidade de dias: 31\n";
            std::cout << "Estação: Inverno\n";
            break;
        case 8:
            std::cout << "Mês: Agosto\n";
            std::cout << "Semestre: 2º Semestre\n";
            std::cout << "Quantidade de dias: 31\n";
            std::cout << "Estação: Inverno\n";
            break;
        case 9:
            std::cout << "Mês: Setembro\n";
            std::cout << "Semestre: 2º Semestre\n";
            std::cout << "Quantidade de dias: 30\n";
            std::cout << "Estação: Primavera\n";
            break;
        case 10:
            std::cout << "Mês: Outubro\n";
            std::cout << "Semestre: 2º Semestre\n";
            std::cout << "Quantidade de dias: 31\n";
            std::cout << "Estação: Primavera\n";
            break;
        case 11:
            std::cout << "Mês: Novembro\n";
            std::cout << "Semestre: 2º Semestre\n";
            std::cout << "Quantidade de dias: 30\n";
            std::cout << "Estação: Primavera\n";
            break;
        case 12:
            std::cout << "Mês: Dezembro\n";
            std::cout << "Semestre: 2º Semestre\n";
            std::cout << "Quantidade de dias: 31\n";
            std::cout << "Estação: Verão\n";
            break;
        default:
            std::cout << "Mês inválido! Digite um número entre 1 e 12.\n";
            break;
    }

    return 0;
}


// Solicite ao usuário que informe um sexo(M / F ou m / f), interprete o valor informado e
// escreva o sexo por extenso. O programa deverá ser capaz de identificar
// um valor inválido e notificar o usuário.

#include <iostream>

int main() {
    char genero;

    std::cout << "Digite um gênero: ";
    std::cin >> genero;

    switch (genero) {
        case 'm':
        case 'M':
            std::cout << "Masculino";
            break;
        case 'f':
        case 'F':
            std::cout << "Feminino";
            break;
        default:
            std::cout << "Gênero inválido!";
            break;
    }

    return 0;
}


// Calculadora básica : Digite uma expressão matemática com dois números inteiros ou fracionários, exemplos:
// • 1+1  2.3*2  5-2.7  9.3/2.4
// • Interprete a expressão e dê o resultado correto;
// • Cada operação matemática deve ser uma opção do switchcase;

#include <iostream>

int main() {
    double num1, num2;
    char operacao;

    std::cout << "Digite a expressão matemática no formato 'num1 operacao num2': ";
    std::cin >> num1 >> operacao >> num2;

    switch (operacao) {
        case '+':
            std::cout << "Resultado: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Resultado: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Resultado: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Resultado: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Divisão por zero não é permitida." << std::endl;
            }
            break;
        default:
            std::cout << "Operação inválida!" << std::endl;
            break;
    }

    return 0;
}

// O cardápio de uma lancheria é o seguinte:
// Item                  Código              Preço
// Cachorro quente        100                R$ 5,50
// Bauru simples          101                R$ 6,20
// Bauru com ovo          102                R$ 7,80
// Hamburguer             103                R$ 5,90
// Cheeseburguer          104                R$ 6,80
// Refrigerante           105                R$ 3,70
// Suco natural           106                R$ 4,25
// Implemente um programa que leia o código do item pedido, a quantidade desejada e apresente na tela
// a descrição do item e o valor total a ser pago.

#include <iostream>

int main() {
    int codigo;
    float quantidade;

    std::cout << "Item                  Código              Preço" << std::endl;
    std::cout << "Cachorro quente        100                R$ 5,50" << std::endl;
    std::cout << "Bauru simples          101                R$ 6,20" << std::endl;
    std::cout << "Bauru com ovo          102                R$ 7,80" << std::endl;
    std::cout << "Hamburguer             103                R$ 5,90" << std::endl;
    std::cout << "Cheeseburguer          104                R$ 6,80" << std::endl;
    std::cout << "Refrigerante           105                R$ 3,70" << std::endl;
    std::cout << "Suco natural           106                R$ 4,25" << std::endl;

    std::cout << "Digite o código do seu pedido: ";
    std::cin >> codigo;

    std::cout << "Digite a quantidade: ";
    std::cin >> quantidade;

    switch (codigo) {
        case 100:
            std::cout << "Cachorro quente, total a pagar: " << 5.50 * quantidade << std::endl;
            break;
        case 101:
            std::cout << "Bauru simples, total a pagar: " << 6.20 * quantidade << std::endl;
            break;
        case 102:
            std::cout << "Bauru com ovo, total a pagar: " << 7.80 * quantidade << std::endl;
            break;
        case 103:
            std::cout << "Hamburguer, total a pagar: " << 5.90 * quantidade << std::endl;
            break;
        case 104:
            std::cout << "Cheeseburguer, total a pagar: " << 6.80 * quantidade << std::endl;
            break;
        case 105:
            std::cout << "Refrigerante, total a pagar: " << 3.70 * quantidade << std::endl;
            break;
        case 106:
            std::cout << "Suco natural, total a pagar: " << 4.25 * quantidade << std::endl;
            break;
        default:
            std::cout << "Código inválido!" << std::endl;
            break;
    }

    return 0;
}


// A cotação do Dólar em 08/03/2017 está representada na tabela abaixo:
// Símbolo     Nome           1 Dólar
// U$          Dólar          1,00000
// R$          Real           3,14710
// E$          Euro           0,94706
// I$          Iene           114,68000
// L$          Libra          0,82176
// P$          Peso           15,58000
// Desenvolva um programa de taxa de câmbio onde o usuário informa qualquer valor monetário
// em qualquer uma das moedas acima e em seguida informa a moeda para qual deseja converter.
// O programa deve calcular o valor convertido na nova moeda solicitada.A entrada de dados
// deve ser no formato M$ddd.dd > M$.
// Ex: P$76.43>L$ deve retornar L$4.03.
// Para testar as conversões, utilize a calculadora do Banco Central disponível em:
// http://www4.bcb.gov.br/pec/conversao/conversao.asp

#include <iostream>
#include <string>

int main() {
    float valor;
    std::string moedaOrigem, moedaDestino;
    float taxaDolar = 1.00000, taxaReal = 3.14710, taxaEuro = 0.94706,
          taxaIene = 114.68000, taxaLibra = 0.82176, taxaPeso = 15.58000;
    float valorConvertido;

    std::cout << "Digite o valor monetário no formato M$ddd.dd (ex: U$ 100.50): ";
    std::cin >> moedaOrigem >> valor;

    std::cout << "Digite a moeda para a qual deseja converter (U$/R$/E$/I$/L$/P$): ";
    std::cin >> moedaDestino;

    switch (moedaOrigem[0]) {
        case 'U':
            valorConvertido = valor * (moedaDestino[0] == 'U' ? 1.0 : (moedaDestino[0] == 'R' ? taxaReal : (moedaDestino[0] == 'E' ? taxaEuro : (moedaDestino[0] == 'I' ? taxaIene : (moedaDestino[0] == 'L' ? taxaLibra : taxaPeso)))));
            break;
        case 'R':
            valorConvertido = valor * (moedaDestino[0] == 'U' ? (1.0 / taxaDolar) : (moedaDestino[0] == 'R' ? 1.0 : (moedaDestino[0] == 'E' ? (1.0 / taxaEuro) : (moedaDestino[0] == 'I' ? (1.0 / taxaIene) : (moedaDestino[0] == 'L' ? (1.0 / taxaLibra) : (1.0 / taxaPeso))))));
            break;
        case 'E':
            valorConvertido = valor * (moedaDestino[0] == 'U' ? (taxaDolar / taxaEuro) : (moedaDestino[0] == 'R' ? (taxaReal / taxaEuro) : (moedaDestino[0] == 'E' ? 1.0 : (moedaDestino[0] == 'I' ? (taxaIene / taxaEuro) : (moedaDestino[0] == 'L' ? (taxaLibra / taxaEuro) : (taxaPeso / taxaEuro))))));
            break;
        case 'I':
            valorConvertido = valor * (moedaDestino[0] == 'U' ? (taxaDolar / taxaIene) : (moedaDestino[0] == 'R' ? (taxaReal / taxaIene) : (moedaDestino[0] == 'E' ? (taxaEuro / taxaIene) : (moedaDestino[0] == 'I' ? 1.0 : (moedaDestino[0] == 'L' ? (taxaLibra / taxaIene) : (taxaPeso / taxaIene))))));
            break;
        case 'L':
            valorConvertido = valor * (moedaDestino[0] == 'U' ? (taxaDolar / taxaLibra) : (moedaDestino[0] == 'R' ? (taxaReal / taxaLibra) : (moedaDestino[0] == 'E' ? (taxaEuro / taxaLibra) : (moedaDestino[0] == 'I' ? (taxaIene / taxaLibra) : (moedaDestino[0] == 'L' ? 1.0 : (taxaPeso / taxaLibra))))));
            break;
        case 'P':
            valorConvertido = valor * (moedaDestino[0] == 'U' ? (taxaDolar / taxaPeso) : (moedaDestino[0] == 'R' ? (taxaReal / taxaPeso) : (moedaDestino[0] == 'E' ? (taxaEuro / taxaPeso) : (moedaDestino[0] == 'I' ? (taxaIene / taxaPeso) : (moedaDestino[0] == 'L' ? (taxaLibra / taxaPeso) : 1.0)))));
            break;
        default:
            std::cout << "Moeda de origem inválida." << std::endl;
            return 1;
    }

    std::cout << "Valor convertido: " << valorConvertido << " " << moedaDestino << std::endl;

    return 0;
}



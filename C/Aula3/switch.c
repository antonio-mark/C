// Crie um programa que exiba o nome do dia da semana, se é dia útil, fim de semana ou dia inválido.
// Considere que domingo é representado pelo número 1 e sábado pelo 7.
// Peça para o usuário informar o número correspondente ao dia.

#include <stdio.h>
void main()
{
    int dia;

    printf("Domingo - 1\n");
    printf("Segunda - 2\n");
    printf("Terça - 3\n");
    printf("Quarta - 4\n");
    printf("Quinta - 5\n");
    printf("Sexta - 6\n");
    printf("Sábado - 7\n");
    printf("Informe o numero referente ao dia: ");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("Domingo e fim de semana");
        break;
    case 2:
        printf("Segunda e dia util");
        break;
    case 3:
        printf("Terça e dia util");
        break;
    case 4:
        printf("Quarta e dia util");
        break;
    case 5:
        printf("Quinta e dia util");
        break;
    case 6:
        printf("Sexta e dia util");
        break;
    case 7:
        printf("Sábado e fim de semana");
        break;
    default:
        printf("Dia inválido!");
        break;
    }
}

// Crie um programa que receba um número entre 1 e 12 e mostre na tela as seguintes informações :
// • Nome do mês correspondente
// • Qual o semestre
// • Quantidade de dias
// • Estação do ano predominante

#include <stdio.h>
void main()
{
    int mes;

    printf("Informe o numero referente ao mes (1 a 12): ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
        printf("Mês: Janeiro\n");
        printf("Semestre: 1º Semestre\n");
        printf("Quantidade de dias: 31\n");
        printf("Estação: Verão\n");
        break;
    case 2:
        printf("Mês: Fevereiro\n");
        printf("Semestre: 1º Semestre\n");
        printf("Quantidade de dias: 28 ou 29\n");
        printf("Estação: Verão\n");
        break;
    case 3:
        printf("Mês: Março\n");
        printf("Semestre: 1º Semestre\n");
        printf("Quantidade de dias: 31\n");
        printf("Estação: Outono\n");
        break;
    case 4:
        printf("Mês: Abril\n");
        printf("Semestre: 1º Semestre\n");
        printf("Quantidade de dias: 30\n");
        printf("Estação: Outono\n");
        break;
    case 5:
        printf("Mês: Maio\n");
        printf("Semestre: 1º Semestre\n");
        printf("Quantidade de dias: 31\n");
        printf("Estação: Outono\n");
        break;
    case 6:
        printf("Mês: Junho\n");
        printf("Semestre: 1º Semestre\n");
        printf("Quantidade de dias: 30\n");
        printf("Estação: Inverno\n");
        break;
    case 7:
        printf("Mês: Julho\n");
        printf("Semestre: 1º Semestre\n");
        printf("Quantidade de dias: 31\n");
        printf("Estação: Inverno\n");
        break;
    case 8:
        printf("Mês: Agosto\n");
        printf("Semestre: 2º Semestre\n");
        printf("Quantidade de dias: 31\n");
        printf("Estação: Inverno\n");
        break;
    case 9:
        printf("Mês: Setembro\n");
        printf("Semestre: 2º Semestre\n");
        printf("Quantidade de dias: 30\n");
        printf("Estação: Primavera\n");
        break;
    case 10:
        printf("Mês: Outubro\n");
        printf("Semestre: 2º Semestre\n");
        printf("Quantidade de dias: 31\n");
        printf("Estação: Primavera\n");
        break;
    case 11:
        printf("Mês: Novembro\n");
        printf("Semestre: 2º Semestre\n");
        printf("Quantidade de dias: 30\n");
        printf("Estação: Primavera\n");
        break;
    case 12:
        printf("Mês: Dezembro\n");
        printf("Semestre: 2º Semestre\n");
        printf("Quantidade de dias: 31\n");
        printf("Estação: Verão\n");
        break;
    default:
        printf("Mês inválido! Digite um número entre 1 e 12.\n");
        break;
    }

    return 0;
}

// Solicite ao usuário que informe um sexo(M / F ou m / f), interprete o valor informado e
// escreva o sexo por extenso. O programa deverá ser capaz de identificar
// um valor inválido e notificar o usuário.

#include <stdio.h>
void main()
{
    char genero;

    printf("Digite um gênero: ");
    scanf("%c", &genero);

    switch (genero)
    {
    case 'm':
        printf("Masculino");
        break;
    case 'M':
        printf("Masculino");
        break;
    case 'f':
        printf("Feminino");
        break;
    case 'F':
        printf("Feminino");
        break;
    default:
        printf("Genero inválido!");
        break;
    }
}

// Calculadora básica : Digite uma expressão matemática com dois números inteiros ou fracionários, exemplos:
// • 1+1  2.3*2  5-2.7  9.3/2.4
// • Interprete a expressão e dê o resultado correto;
// • Cada operação matemática deve ser uma opção do switchcase;

#include <stdio.h>
void main()
{
    double num1, num2;
    char operacao;

    printf("Digite a expressão matemática no formato 'num1 operacao num2': ");
    scanf("%lf %c %lf", &num1, &operacao, &num2);

    switch (operacao)
    {
    case '+':
        printf("Resultado: %.2lf\n", num1 + num2);
        break;
    case '-':
        printf("Resultado: %.2lf\n", num1 - num2);
        break;
    case '*':
        printf("Resultado: %.2lf\n", num1 * num2);
        break;
    case '/':
        printf("Resultado: %.2lf\n", num1 / num2);
        break;
    default:
        printf("Operação inválida!\n");
        break;
    }
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

#include <stdio.h>
void main()
{
    int codigo;
    float quantidade;

    printf("Item                  Código              Preço\n");
    printf("Cachorro quente        100                R$ 5,50\n");
    printf("Bauru simples          101                R$ 6,20\n");
    printf("Bauru com ovo          102                R$ 7,80\n");
    printf("Hamburguer             103                R$ 5,90\n");
    printf("Cheeseburguer          104                R$ 6,80\n");
    printf("Refrigerante           105                R$ 3,70\n");
    printf("Suco natural           106                R$ 4,25\n");

    printf("Digite o código do seu pedido: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%f", &quantidade);

    switch (codigo)
    {
    case 100:
        printf("Cachorro quente, total a pagar: %.2f\n", 5.50 * quantidade);
        break;
    case 101:
        printf("Bauru simples, total a pagar: %.2f\n", 6.20 * quantidade);
        break;
    case 102:
        printf("Bauru com ovo, total a pagar: %.2f\n", 7.80 * quantidade);
        break;
    case 103:
        printf("Hamburguer, total a pagar: %.2f\n", 5.90 * quantidade);
        break;
    case 104:
        printf("Cheeseburguer, total a pagar: %.2f\n", 6.80 * quantidade);
        break;
    case 105:
        printf("Refrigerante, total a pagar: %.2f\n", 3.70 * quantidade);
        break;
    case 106:
        printf("Suco natural, total a pagar: %.2f\n", 4.25 * quantidade);
        break;
    default:
        printf("Código inválido!\n");
        break;
    }
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

#include <stdio.h>

int main()
{
    float valor;
    char moedaOrigem[3], moedaDestino[3];
    float taxaDolar = 1.00000, taxaReal = 3.14710, taxaEuro = 0.94706,
          taxaIene = 114.68000, taxaLibra = 0.82176, taxaPeso = 15.58000;
    float valorConvertido;

    printf("Digite o valor monetário no formato M$ddd.dd (ex: U$ 100.50): ");
    scanf(" %s%f", &moedaOrigem, &valor);

    while (getchar() != '\n')
        ;

    printf("Digite a moeda para a qual deseja converter (U$/R$/E$/I$/L$/P$): ");
    scanf(" %s", &moedaDestino);

    switch (moedaOrigem[0])
    {
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
        printf("Moeda de origem inválida.\n");
        return 1;
    }

    printf("Valor convertido: %.2f %s\n", valorConvertido, moedaDestino);

    return 0;
}

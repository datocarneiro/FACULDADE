#include <stdio.h>

int main() {
    int meses;
    float investimento, rendimento, imposto, valorinvestido, valor_inicial, lucro_mes, lucrototal, descontoImposto, saldoFinal;

    // Solicita ao usuário o número de meses a serem investidos
    printf("Quantos meses será investido? ");
    scanf("%d", &meses);

    // Solicita valor do investimento inicial
    printf("Qual o valor do investimento? ");
    scanf("%f", &investimento);

    rendimento = 0.01;   // Taxa de rendimento mensal de 1%
    imposto = 0.15;      // Taxa de imposto sobre os rendimentos apenas de 15%
    valorinvestido = investimento;  // Salva o valor inicial do investimento
    printf("\n__________________________________________________");
    printf("\nValor investido: %.2f", valorinvestido);

    // Loop que simula o investimento ao longo dos meses
    for (int i = 0; i < meses; i++) {
        printf("\n__________________________________________________");
        // Salva o valor inicial do investimento no início do mês
        valor_inicial = investimento;
        // Calcula o novo saldo após o rendimento mensal
        investimento += investimento * rendimento;
        printf("\nSaldoMensal: %.3f", investimento);
        // Calcula o lucro mensal
        lucro_mes = investimento - valor_inicial;
    }
    printf("\n__________________________________________________");
    // Calcula o lucro total ao final do período de investimento
    lucrototal = investimento - valorinvestido;
    printf("\nLucro total %.3f", lucrototal);

    // Calcula o desconto de imposto sobre o lucro total
    descontoImposto = lucrototal * imposto;
    printf("\nDesconto de imposto sobre lucros total: %.3f", descontoImposto);

    // Calcula o saldo final após o desconto de imposto
    saldoFinal = investimento - descontoImposto;
    printf("\nSaldo final: %.3f\n", saldoFinal);
    printf("__________________________________________________");
    return 0;
}
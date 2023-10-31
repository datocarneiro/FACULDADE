#include <stdio.h>
#include <math.h>

void main() {
    float investimento = 0;
    float porcrendimentos = 0.01;
    float imposto = 0.1;
    int periodo = 0;
    float lucro = 0;
    
    printf("Digite o valor investido:\n");
    scanf("%f", &investimento);
    printf("Qtos meses de investimento:\n");
    scanf("%d", &periodo);

    float saldo = 0;
    lucro = investimento - lucro;

    
    for (int i=1; i <= periodo; i++ ) {
        investimento += investimento * porcrendimentos;
        float desconto = lucro;
        lucro += lucro * imposto;
        saldo += investimento - imposto;

        printf("--------------------------------\n");
        printf("%.3f\n", investimento);
        printf("%.3f\n", lucro);
        printf("%.3f\n", imposto);
        printf("%.3f\n", saldo);
    }
    

}
    
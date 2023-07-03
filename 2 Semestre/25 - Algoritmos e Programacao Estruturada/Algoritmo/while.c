#include<stdio.h>
#include<math.h>
#include<stdio.h>

int main()
{
    system("cls"); // comando para limpar o terminal antes de compilar

    int variavel = 0; // atenção, se a variavel nesse código for maior que 10 ficaria em loop infinito........

    while (variavel <10) // Enquanto a varialvel for menor que 10, irá somar a variavel mais +1. 
    {
        printf("variavel atual menos um: %d \n", variavel);
        variavel ++; 
    }
    return 0;
}

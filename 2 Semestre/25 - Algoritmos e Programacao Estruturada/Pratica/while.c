#include<stdio.h>


/* sintaxe com a repetição com teste no início:

while (<condição>) 
{
Comando 1;
Comando 2;
Comando n;
}
*/

int main()
{
    system("cls"); // comando para limpar o terminal antes de compilar

    int variavel = 0; // atenção, se a variavel (contador) nesse código for maior que 10 ficaria em loop infinito........

    while (variavel <10) // Enquanto a condição <10 for True, vai repetir o laço, ou seja Enquanto a varialvel for menor que 10, irá somar a variavel mais +1. 
    {
        printf("enquanto a variavel atual for menor que 10 pegar e somar ao incremnto: %d \n", variavel);
        variavel ++; // incremento para não ficar em loop infinito
    }
    return 0;
}

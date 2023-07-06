#include<stdio.h>
#include<math.h>
#include<stdio.h>


int main()
{
    system("cls"); // comando para limpar o terminal antes de compilar
    int variavel = 0; // esse é o valor de saida inicial
    do
    {
        printf("resultado %d \n", variavel);
        variavel ++;
    } while (variavel <20);// enquanto a for menor que 20 vai entrar no loop , somando o incremento "variavel ++"

    return 0;
}


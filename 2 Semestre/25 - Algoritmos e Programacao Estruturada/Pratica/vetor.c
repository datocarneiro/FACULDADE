#include<stdio.h>
int main()
{
    int numeros[5];
    int posicao;
    for (int i = 0; i <5; i++)
    {
        numeros[i] = (i + 1) * 100;
    }
    while (posicao < 0 || posicao > 4)
    {
        printf("digite a posicao de 0 a 4:");
        scanf("%d", &posicao);
        if (posicao >=0  && posicao <=4)
        {
            printf("e o resultado é: %d\n", numeros[posicao]);
        } 
        else
        {
            printf("número invalido\n");
        }
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int numeros[5];
    int posicao;
    for (int i = 0; i <5; i++)
    {
        numeros[i] = (i + 1) * 100;
    }
    printf("digite a posicao de 0 a 4:");
    scanf("%d", &posicao);
    if (posicao >=0  && posicao <=5)
    {
        printf("%d\n", numeros[posicao]);
    }
    else
    {
        printf("número invalido");
    }
    return 0;
}


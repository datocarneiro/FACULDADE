
/* 
stdio.h: Fornece funções para entrada e saída padrão, como leitura e gravação de arquivos.
math.h: funções matemáticas avançadas
string.h: manipulação de strings, como cópia, concatenação e comparação.
stdlib.h: alocação de memória
time.h: funções relacionadas ao tempo e data
ctype.h: manipular caracteres, como verificações de letras maiúsculas/minúsculas e conversões.
*/


#include <stdio.h>

int main()
{
    int vetor[5]; // Declare o vetor com o tamanho desejado

    for (int i = 0; i < 5; ++i)
    {
        vetor[i] = i * 10; // Atribua um valor ao índice atual multiplicando-o por 10
    }

    printf("Valores do vetor:\n");

    for (int i = 0; i < 5; ++i)
    {
        printf("%d\n", vetor[i]); // Imprima os valores do vetor
    }

    return 0;
}


/* 
stdio.h: Fornece funções para entrada e saída padrão, como leitura e gravação de arquivos.
math.h: funções matemáticas avançadas
string.h: manipulação de strings, como cópia, concatenação e comparação.
stdlib.h: alocação de memória
time.h: funções relacionadas ao tempo e data
ctype.h: manipular caracteres, como verificações de letras maiúsculas/minúsculas e conversões.
*/

#include<stdio.h>
#include<string.h>
int main()
{
    system("cls"); // comando para limpar o terminal antes de compilar

    char vetor [5][2] = {"seg", "ter","qua","qui","sex"};

    for (int i = 0; i <5; ++i)
    {
        printf("%s\n", vetor[i]);
    }

    return 0;
}

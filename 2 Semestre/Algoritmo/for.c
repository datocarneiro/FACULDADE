#include<stdio.h>

/* SINTAXE 
* Inicialização: neste momento, coloca-se a instrução de atribuição
para inicializar o contador do laço. A inicialização é executada uma
única vez antes de começar o laço.

* Condição de parada: realiza um teste que determina se a condição
é verdadeira ou falsa; se for verdadeira, permanece no laço e, se for
falsa, encerra o laço e passa para a próxima instrução.

* Incremento: parte das nossas explicações anteriores, em que é
possível incrementar uma repetição de acordo com um contador
específico, lembrando que o incremento é executado depois dos
comandos.

for (inicialização; condição de parada; incremento)
{
 comando ou sequência de comandos;
}
*/

int main()
{
    system("cls"); // comando para limpar o terminal antes de compilar
    int i;
    for (i = 0; i <=15 ; i++)
    {
        printf("Para I menor 15 repetir o laço:  %d \n", i);
    }
    
    return 0;
}

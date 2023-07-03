/*
algumas das principais bibliotecas da linguagem C e uma breve descriÃ§Ã£o de sua funÃ§Ã£o:
stdio.h - Biblioteca padrÃ£o de entrada e saÃ­da. Inclui funÃ§Ãµes para ler e escrever dados a partir do teclado ou arquivo.
math.h - Biblioteca matemÃ¡tica. Inclui funÃ§Ãµes matemÃ¡ticas como seno, cosseno, logaritmo, raiz quadrada, etc.
string.h - Biblioteca para manipulaÃ§Ã£o de strings. Inclui funÃ§Ãµes para copiar, concatenar, comparar e encontrar caracteres em strings.
time.h - Biblioteca para trabalhar com datas e horÃ¡rios. Inclui funÃ§Ãµes para obter o tempo atual, converter datas e horÃ¡rios para diferentes formatos, medir a duraÃ§Ã£o entre duas datas/horÃ¡rios, etc.
stdlib.h - Biblioteca padrÃ£o de utilidades. Inclui funÃ§Ãµes para alocaÃ§Ã£o de memÃ³ria dinÃ¢mica, conversÃ£o de tipos de dados, gerenciamento de processos, etc.
ctype.h - Biblioteca para trabalhar com caracteres. Inclui funÃ§Ãµes para verificar se um caractere Ã© maiÃºsculo, minÃºsculo, um nÃºmero ou um espaÃ§o em branco.
stdbool.h - Biblioteca para trabalhar com tipos booleanos. Inclui os valores verdadeiro (true) e falso (false).
limits.h - Biblioteca para trabalhar com limites e tamanhos de variÃ¡veis. Inclui constantes que representam o tamanho mÃ¡ximo e mÃ­nimo dos diferentes tipos de dados.
errno.h - Biblioteca para tratamento de erros. Inclui variÃ¡veis e funÃ§Ãµes para detectar e tratar erros durante a execuÃ§Ã£o do programa.

calcular o salÃ¡rio lÃ­quido de acordo com a tabela 
salario de contribuiÃ§Ã£o(R$) 	        aliquota/ INSS
atÃ© 1.693,72	                             8%
de 1.693,72 atÃ© 2.822,90	                 9%
de 2.822,91 atÃ© 5.646,80	                 11%
acima de 5.646,80	                       R$ 621,04 (invariavelmente)
*/
#include<stdio.h>
#include<math.h>
#include<stdio.h>
#include<locale.h>

int main()
{
    system("cls");
    float salario_bruto, inss, salario_liquido;

    printf("\nDigite seu salário bruto:");
    scanf("%f", &salario_bruto);

    if (salario_bruto <= 1693.72)
    {
        inss = salario_bruto * 0.08;
        salario_liquido = salario_bruto - inss;
        printf("Desconto de INSS: R$ %.2f\n", inss);
        printf("Salário líquido é: R$ %.2f\n\n", salario_liquido);
    }
    else if (salario_bruto > 1693.72 && salario_bruto <= 2822.90)
    {
        inss = salario_bruto * 0.09;
        salario_liquido = salario_bruto - inss;
        printf("Desconto de INSS: R$ %.2f\n\n", inss);
        printf("Salário líquido é: R$ %.2f\n\n", salario_liquido);
    }
    else if (salario_bruto > 2822.91 && salario_bruto <= 5646.80)
    {
        inss = salario_bruto * 0.11;
        salario_liquido = salario_bruto - inss;
        printf("Desconto de INSS: R$ %.2f\n", inss);
        printf("Salário líquido é: R$ %.2f\n\n", salario_liquido);
    }
    else
    {
        inss = 621.04;
        salario_liquido = salario_bruto - inss;
        printf("Desconto de INSS: R$ 621.04\n");
        printf("Salário líquido é: R$ %.2f\n\n", salario_liquido);
    }

    return 0;
}

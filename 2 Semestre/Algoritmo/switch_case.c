#include <stdio.h>
#include <locale.h>


int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese_Brazil");
    int menu;
    printf("%s \n", "digite 1, 2 ou 3");
    scanf("%d", &menu);

    switch (menu)
    {
        case 1 /* constant-expression */:
            printf("menu NOME \n");
            break;
        case 2 /* constant-expression */:
            printf("menu SOBRENOME \n");
            break;
        case 3 /* constant-expression */:
            printf("menu terceiro NOME \n");
            break;
        default:
            printf("NÃO ACEITo \n");
            break;
    }
    return 0;
}

 
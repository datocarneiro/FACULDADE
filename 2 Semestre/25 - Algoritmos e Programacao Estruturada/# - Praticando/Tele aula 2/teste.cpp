#include <iostream>

int main()
{
    int numeros[5];
    int posicao = 0;

    for (int i = 0; i < 5; i++)
    {
        numeros[i] = (i + 1) * 100;
    }

    while (posicao < 0 || posicao > 4)
    {
        std::cout << "Digite a posicao de 0 a 4: ";
        std::cin >> posicao;

        if (posicao >= 0 && posicao <= 4)
        {
            std::cout << "E o resultado é: " << numeros[posicao] << std::endl;
        }
        else
        {
            std::cout << "Número inválido." << std::endl;
        }
    }

    return 0;
}
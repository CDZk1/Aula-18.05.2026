#include <stdio.h>

int main()
{
    int soma_numeros_positivos = 0, quantidade_negativos = 0, n;

    for (int i = 0; i < 5; i++)
    {
        printf("Informe o numero ");
        scanf("%d", &n);

        if(n > 0)
        {
            soma_numeros_positivos = n + soma_numeros_positivos;
            //soma_numeros_positivos += n;
        }
        else
        {
            quantidade_negativos = quantidade_negativos + 1;
            //quantidade_negativos += 1;
            //quantidade_negativos++;
        }
    }

    printf("A soma dos numeros positivos e de %d\n", soma_numeros_positivos);
    printf("A quantidade de valores negativos e de %d", quantidade_negativos);

    return 0;
}
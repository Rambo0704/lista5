#include <stdio.h>

int main(){

    int vet[11], i, j,t;
    for (i = 0; i < 10; i++)
    {
        printf("Numero %d:", i + 1);
            scanf("%d", &vet[i]);
    }

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 ; j++)
        {
            if (vet[j] > vet[j + 1])
            {
                t = vet[j];
                vet[j] = vet[j+1];
                vet[j + 1] = t;
            }
        }
    }
    printf("Os numeros em ordem crescente sao: ");
    for (i = 0; i < 10; i++) {
        printf("%d, ", vet[i]);
    }
    printf("\ndigite um numero qualquer: \n");
        scanf("%d", &vet[i]);
    for (i = 0; i < 11; i++)
    {
        for (j = 0; j < 10 ; j++)
        {
            if (vet[j] > vet[j + 1])
            {
                t = vet[j];
                vet[j] = vet[j+1];
                vet[j + 1] = t;
            }

        }
    }
    printf("Os numeros em ordem crescente: ");
    for (i = 0; i < 11; i++) {
        printf("%d, ", vet[i]);
    }
    return 0;

}

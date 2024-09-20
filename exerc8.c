#include <stdio.h>

int main(){

    int vetor[10], i, j, t;
    for (i = 0; i < 10; i++)
    {
        printf("Numero %d:", i + 1);
            scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 ; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                t = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j + 1] = t;
            }
        }
    }
    printf("Os numeros em ordem crescente sao: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }


}

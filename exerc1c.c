#include <stdio.h>
float notatotal(float n[20]){
    int i;
    float soma = 0.0;
    float media;
    for (i=1;i<=20;i++){
     printf("Digite a Nota do aluno %d:\n",i);
     scanf("%f",&n[i]);
     soma += n[i];
    }
    printf("Soma:%.2f\n",soma);
    media = soma/20;
    printf("Media:");
    return media;
}
int main(){
float num[20];
printf("%.2f",notatotal(num));

    return 0;
}

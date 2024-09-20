#include <stdio.h>

int verifica(int a[20]){
	int maior,posicao,i;
	for(i=0;i<20;i++){ //repeticao para inserir os valor :)
	do{ //repetiçao com a condiçao de fazer enquantto o numero for menor que 0
		printf("Digite um valor:");
		scanf("%d",&a[i]);
	}while (a<=0);}
	maior = a[0];
	posicao = 0;
	for (i=1;i<20;i++){ //repetiçao para verificar o maior
		if (a[i]>maior){
			maior = a[i];
		    posicao = i + 1;
		}
	}
   printf("Maior valor: %d\n", maior);
   return printf("Posicao: %d\n", posicao);
}


int main(){
	int num[20];
	
	verifica(num[20]);
	
	
	return 0;
}

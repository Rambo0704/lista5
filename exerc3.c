#include <stdio.h>

int verifica(int a[20]){
	int menor,posicao,i;
	for(i=0;i<20;i++){ //repeticao para inserir os valor :)
	do{ //repeti�ao com a condi�ao de fazer enquantto o numero for menor que 0
		printf("Digite um valor:");
		scanf("%d",&a[i]);
	}while (a<=0);}
	menor = a[20];
	posicao = 0;
	for (i=1;i<20;i++){ //repeti�ao para verificar o maior
		if (a[i]<menor){
			menor = a[i];
		    posicao = i + 1;
		}
	}
   printf("Menor valor: %d\n", menor);
   return printf("Posicao: %d\n", posicao);
}


int main(){
	int num[20];
	
	verifica(num[20]);
	
	
	return 0;
}

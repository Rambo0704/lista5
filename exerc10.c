#include <stdio.h>

int main(){
	int vet[20],i;
	for(i=0;i<20;i++){
	printf("Digite um numero:\n");	
	scanf("%d",&vet[i]);
	}
	int num;
	printf("Digite um numero para verificar existencia:\n");
	scanf("%d",&num);
	printf("\n\n");
	int vet2[20];
	for(i=0;i<20;i++){
	if (num==vet[i]){
		vet2[i]= vet[i] - num;
		printf("numero da verificacao\n",vet2[i]);
	}else{
		printf("%d\n",vet[i]);
	}
	}
	return 0;
}

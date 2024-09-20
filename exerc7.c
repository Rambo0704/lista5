#include <stdio.h>

int main(){
	int i,vet[365],soma;
	
	for(i=0;i<=365;i++){
		printf("Digite as temperaturas medias do dia %d :\n",i);
		scanf("%d",&vet[i]);
		soma += vet[i];
	}
	int menor = vet[0];
	int maior = vet[0];
	for(i=1;i<=365;i++){
		if (vet[i]<menor){
			menor = vet[i];
		}
		if(vet[i]>maior){
			maior = vet[i];
		}
	}
	int media = soma/10;
	int abaixomedia = 0;
	for(i=0;i<=365;i++){
		if(vet[i]<media){
			abaixomedia++;
		}
	}
	printf("Menor temperatura do ano: %.2f\n",menor);
	printf("Maior temperatura do ano: %.2f\n",maior);
	printf("Temperatura media anual: %.2f\n",media);
	printf("Numero de dias com temperatura abaixo da media: %d\n",abaixomedia);
	return 0;
}

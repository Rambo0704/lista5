#include <stdio.h>

void lista(int a[20]){
	int i,maior,menor;
	for (i=0;i<20;i++){
		printf("Digite um valor:\n");
		scanf("%d",&a[i]);
	}
	maior = 0;
	menor = 0;
	for (i=20;i>=0;i--){
		maior = a[i];
		printf(" %d \n",maior);
	}
}
int main(){
	
	int vet[20];
	lista(vet);
	
	
	
	return 0;
}

#include <stdio.h>
int main(){
	int i,vet[30],num;
	for (i=1;i<=30;i++){
		printf("Digite o valor da posicao %d:\n",i);
		scanf("%d",&vet[i]);
	}
	printf("\n\n");
	
	printf("Digite um numero para comparar:\n");
	scanf("%d",&num);
	int contador = 0;
	for(i=1;i<=30;i++){
		if(vet[i] == num){
			contador++;
		}
	}
	printf("%d vezes o numero %d aparece no vetor",contador,num);
	return 0;
}

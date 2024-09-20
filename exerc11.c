#include <stdio.h>
int main(){
	int v1[15],v2[15],i;
	printf("Digite os valores do vetor 1\n");
	for (i=1;i<=15;i++){
		printf("Digite o valor da posicao %d:\n",i);
		scanf("%d",&v1[i]);
	}
	printf("Digite os valores do vetor 2:\n");
	for (i=1;i<=15;i++){
		printf("Digite o valor da posicao %d:\n",i);
		scanf("%d",&v2[i]);
	}
	int contador = 0;
	for(i=1;i<=15;i++){
		if(v1[i] == v2[i]){
		contador++;	
		}else if (v1[i]!=v2[i]){
			printf("vet1: %d    vet2: %d \n",v1[i],v2[i]);
		}
		}
		printf("vetor1 e vetor2 possuem o mesmo numero na mesma posicao = %d vezes\n",contador);
	return 0;
	}


#include <stdio.h>
#include <stdio.h>
int main(){
	int i,vet[50],j;
	for (i=1;i<=50;i++){
		printf("Digite o valor da posicao %d:\n",i);
		scanf("%d",&vet[i]);
	}
	int rep = 0;
	for(i=1;i<=50;i++){
		for(j= i +1;j<=50;j++){
			if(vet[i]== vet[j]){
				printf("Numero %d repetido nas posicoes %d e %d\n",vet[i],i,j);
			}
		}
		}
			return 0;
	}


#include <stdio.h>

int main(){
	int n;
	printf("Digite o comprimento dos vetores:\n");
	scanf("%d",&n);
	int a[n],b[n];
	int i;
	for(i=0;i<n;i++){
		printf("Digite um valor para o vetor a:\n");
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++){
		printf("Digite um valor para o vetor b:\n");
		scanf("%d",&b[i]);
	}
		for(i=0;i<n;i++){
		int soma = a[i] + b[i];
		printf("A soma de %d + %d = %d\n",a[i],b[i],soma);
	}
	return 0;
}

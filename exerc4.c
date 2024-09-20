#include <stdio.h>

void vetor(int A[10]){
	int i;
	for (i=0;i<10;i++){ //loop para ler os numeros
		printf("Digite um numero:\n");
		scanf("%d",&A[i]);
	}
	int X = 0;
	printf("Digite o multiplicador:\n");
	scanf("%d",&X);
	int M[10];
	for(i=0;i<10;i++){ //lop para multiplicar :|
	M[i]= A[i]*X;
	printf("%d\n",M[i]);	
	}
}

int main(){
	int num[10];
	vetor(num);
	
	return 0;
}

//Crie uma fun��o que receba como par�metro um array e o imprima. N�o utilize �ndices para percorrer o array, 
//apenas aritm�tica de ponteiros.

#include<stdio.h>

int i = 0;
void imprimirVetor(int *v){
	printf("Imprimindo... \n");
	while(i != 5){
		printf("%d ", *v);
		i++;
		v++;
	}
}

main(){
	int vetor[5];
	printf("Digite os 5 valores do vetor: \n");
	for(int i = 0; i < 5; i++){
		scanf("%d", &vetor[i]);
	}
	imprimirVetor(vetor);
	}

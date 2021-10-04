//Leia um vetor com 10 números reais, ordene os elementos deste vetor, e no final escreva os elementos do vetor ordenado.

#include<stdio.h>

main(){	

float numeros[10];
int aux;

	//Recebendo os numeros nos indices
		
	for(int i = 0; i <= 10; i++){
		printf("Digite o valor da %d posicao do vetor: ", i);
		scanf("%f", &numeros[i]);
	}  
	
	//Reordenando os valores
	
	for(int i = 0; i <= 10; i++){
		for(int j = i+1; j <= 10; j++){
			if(numeros[i] > numeros[j]){
				aux = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = aux;	
			}
		}
	}
	
	//Imprimindo o vetor ordenado
	
	printf("\nValores do vetor: ");
	for(int i = 0; i <= 10; i++){
			printf("%.1f ", numeros[i]);
	}
}

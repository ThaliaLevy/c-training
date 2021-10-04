// Escreva um programa que leia 10 números inteiros e os armazene em um vetor. 
// Imprima o vetor, o maior elemento (número e posição) e o menor elemento (número e posição).

#include<stdio.h>

main()
{	
	int numeros[10];
	int i = 0;
	int maiorNumero;
	int menorNumero;
	int posicaoMaior = 0;
	int posicaoMenor = 0;
	
	while(i < 10){
		printf("Insira o numero da posicao %d: ", i);
		scanf("%d", &numeros[i]);
		if(i == 0){
			maiorNumero = numeros[0];
			menorNumero = numeros[0];
		}else{
			if(maiorNumero < numeros[i]){
				maiorNumero = numeros[i];
				posicaoMaior = i;
			}else{
				if(menorNumero > numeros[i]){
					menorNumero = numeros[i];
					posicaoMenor = i;
				}		
			}			
		}
		i++;
	}	
	printf("\nO maior numero do vetor e o %d e esta na posicao %d \n", maiorNumero, posicaoMaior);
	printf("\nO menor numero do vetor e o %d e esta na posicao %d \n", menorNumero, posicaoMenor);
	
	int j = 0;	
	printf("\nTodos os numeros dentro do vetor: ");
	while(j < 10){
		if(j == 9){
			printf("%d. ", numeros[j]);	
		}else{
			printf("%d, ", numeros[j]);	
		}
		j++;
	}
}

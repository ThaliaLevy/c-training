//Escreva um programa que leia dois vetores de 10 posições e faça a multiplicação dos elementos do mesmo índice, 
//colocando o resultado em um terceiro vetor. Mostre o vetor resultante.

#include<stdio.h>

main(){	

	float vetor1[10] = {0};
	float vetor2[10] = {0};
	float vetorResultante[10] = {0};
	
	int aux = 1;
	while(aux <= 2){
		printf("Digite os 10 valores do vetor %d: \n", aux);
		for(int j = 0; j < 10; j++){
			if(aux == 1){
				scanf("%f", &vetor1[j]);
			}else{
				scanf("%f", &vetor2[j]);
			}	
		}
		aux++;
	}
	
	for(int i = 0; i < 10; i++){
		vetorResultante[i] = vetor1[i] * vetor2[i];
	}
	
	for(int i = 0; i < 10; i++){
		printf("Indice %d do vetor resultante: %.1f \n", i, vetorResultante[i]);
	}
}

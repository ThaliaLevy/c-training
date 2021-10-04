//Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endereço de cada posição dessa matriz.

#include<stdio.h>

main(){
	
	float matriz[3][3];
	
	printf("\nDigite os 9 valores da matriz: \n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			scanf("%f", &matriz[i][j]);	
		}
	}
	
	printf("\nImprimindo o endereco de memoria dos indices: \n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%x  ", &matriz[i][j]);
		}
	}
	
}

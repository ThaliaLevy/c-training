//Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 números inteiros. Em seguida, gere um array 
//unidimensional pela soma dos números de cada coluna da matriz e mostrar na tela esse array.

#include<stdio.h>

main(){		
	int matriz[3][3];
	int somaColunas[3] = {0};
	int aux, aux1, aux2;
	
	//Lendo os valores da matriz
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("\nDigite o numero da posicao %d %d da matriz: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	//Somando os valores correspondentes das colunas 
	
	for(int j = 0; j < 3; j++){
		for(int i = 0; i < 3; i++){
			if(j == 0){
				somaColunas[0] += matriz[i][0];
			}else{
				if(j == 1){
					somaColunas[1] += matriz[i][1];
				}else{
					somaColunas[2] += matriz[i][2];
				}
			}
		}
	}
	
	//Imprimindo o vetor unidimensional
	
	printf("\nVetor da soma das colunas: ");
	for(int j = 0; j < 3; j++){
		printf("%d ", somaColunas[j]);
	}
}


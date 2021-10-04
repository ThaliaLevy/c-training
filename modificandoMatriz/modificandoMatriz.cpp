#include<stdio.h>

main(){	

	float valores[3][6] = {0};
	float somaPares = 0;
	float somaDuasColunas = 0;
	float vetorAux[3] = {0};
	
	//leia uma matriz 3 x 6 com valores reais - OK
	
	printf("\nDigite os 18 valores da matriz: \n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 6; j++){
			scanf("%f", &valores[i][j]);	
			if((j+1)%2 == 0){
			somaPares = somaPares + valores[i][j];
			}
		}
	}
	
	printf("\nImprimindo a matriz: \n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 6; j++){
			printf("%1.f  ", valores[i][j]);
		}
		printf("\n");
	}
	
	//Imprima a soma de todos os elementos das colunas pares - OK
	
	printf("\nSoma dos elementos das colunas pares: ");
	printf("%.1f ", somaPares);
	
	//Imprima a média aritmética dos elementos da segunda e quarta colunas - OK
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 6; j++){
			if((j+1) == 2 || (j+1) == 4){
				somaDuasColunas += valores[i][j];
			}
		}
	}
	
	somaDuasColunas = somaDuasColunas/6;
	printf("\nA media aritmetica da segunda e quarta coluna e %.1f.", somaDuasColunas);
	
	//Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2 - OK
	
	for(int j = 0; j < 1; j++){
		for(int i = 0; i < 3; i++){
			if(i==0){
				valores[0][5] = valores[i][j] + valores[i][j+1];
			}else{
				if(i==1){
					valores[1][5] = valores[i][j] + valores[i][j+1];
				}else{
					valores[2][5] = valores[i][j] + valores[i][j+1];
				}
			}
		}
	}
	
	//Imprima a matriz modificada
		
	printf("\nImprimindo a matriz com a coluna 6 modificada: \n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 6; j++){
			printf("%1.f  ", valores[i][j]);
		}
		printf("\n");
	}

}

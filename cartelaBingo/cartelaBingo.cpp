//Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de bingo. 
//Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de modo a não ter números
//repetidos dentro das cartelas. 
//O programa deve exibir na tela a cartela gerada (exibir como uma cartela real).

#include<stdio.h>
#include <stdlib.h>

main(){	
	int numerosAleatorios[99];
	int cartela[25] = {0};
	
	//Recebendo numeros aleatorios 
	
	for(int i = 0; i <= 99; i++){
		numerosAleatorios[i] = rand() % 100;
	}
	
	//Transformando os numeros repetidos em -1
	
	for(int i = 0; i <= 99; i++){
		for(int j = i+1; j <= 99; j++){
			if(numerosAleatorios[i] == numerosAleatorios[j]){
				numerosAleatorios[j] = -1;	
			}
		}
	}
	
	//Filtrando os numeros negativos e imprimindo a cartela do bingo
	
	int parada = 1;
	for(int i = 0; i <= 99; i++){
		if(parada <= 25){
			if(numerosAleatorios[i] >= 0){
				cartela[i] = numerosAleatorios[i];	
				if(parada%5 == 0){
					if(numerosAleatorios[i] < 10){
						printf("0%d \n", cartela[i]);	
					}else{
						printf("%d \n", cartela[i]);	
					}
				}else{
					if(numerosAleatorios[i] < 10){
						printf("0%d ", cartela[i]);	
					}else{
						printf("%d ", cartela[i]);	
					}
				}
				parada++;
			}
		}
	}
}

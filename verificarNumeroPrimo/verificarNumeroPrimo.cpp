//Escreva uma função que verifique se um número é primo. Sua função deve retornar verdadeiro ou falso. 
//O parâmetro de entrada é o número a ser verificado.

#include<stdio.h>

int verificarPrimo(int numero){
	
	if(numero%2 == 0 || numero%3 == 0 || numero == 1){
		if(numero == 2 || numero == 3){
			printf("\nVerdadeiro");
		}else{
			return printf("\nFalso");
		}
	}else{
		return printf("\nVerdadeiro");
	}	
}

main()
{	
	int numero;
	printf("Informe o numero que deseja verificar se e primo: ");
	scanf("%d", &numero);

	verificarPrimo(numero);
}

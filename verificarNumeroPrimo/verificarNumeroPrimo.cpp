//Escreva uma fun��o que verifique se um n�mero � primo. Sua fun��o deve retornar verdadeiro ou falso. 
//O par�metro de entrada � o n�mero a ser verificado.

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

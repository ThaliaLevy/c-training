//Escreva uma fun��o recursiva para apresentar a soma de todos os n�meros inteiros pares de zero at� um n�mero informado pelo usu�rio.
//Por exemplo: Para n = 7 a fun��o deve retornar 0 + 2 + 4 + 6 = 12.

#include<stdio.h>

int somarNumeros(int numero, int somaPares, int i){
	if(i == numero){
		return somaPares;
	}else{
		if(i == 0){
			printf("%d ", i);
			somaPares = somaPares + i;
			return somarNumeros(numero, somaPares, i+1);
		}else{
			if(i%2 == 0){
				printf("+ %d ", i);
				somaPares = somaPares + i;
				return somarNumeros(numero, somaPares, i+1);
			}else{
				return somarNumeros(numero, somaPares, i+1);
			}
		}
	}
}

main()
{	
	int numero;
	int somaPares = 0;
	int i = 0;
	
	printf("Informe um numero: ");
	scanf("%d", &numero);

	printf("= %d", somarNumeros(numero, somaPares, i));
}

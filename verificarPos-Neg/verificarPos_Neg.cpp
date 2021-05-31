#include<stdio.h>
//Verificar se um número inteiro é positivo, negativo ou nulo.
main()
{	
	float num;
	printf("Informe o numero que deseja analisar: ");
	scanf("%f", &num);
		if(num == 0)
	printf("Numero nulo.");
		else
			if(num > 0)
	printf("Numero positivo.");
		else
	printf("Numero negativo.");
}

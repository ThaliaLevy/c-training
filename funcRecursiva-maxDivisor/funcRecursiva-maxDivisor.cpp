// Escreva uma fun��o recursiva calcule o m�ximo divisor comum entre dois n�meros usando a recurs�o 
// (o m�ximo divisor comum entre os dois � o maior de seus divisores).

#include<stdio.h>

int calcularMaxDivisor(int numero1, int numero2, int i, int maior)
{
	if(i > numero1){
		return maior;
	}else{
		if(numero1%i == 0 && numero2%i == 0){
			printf("\nDivisor em comum: %d", i);
			if(maior < i){
				maior = i;
				return calcularMaxDivisor(numero1, numero2, i+1, maior);
			}
		}else{
			return calcularMaxDivisor(numero1, numero2, i+1, maior);
		}
	}
}

main()
{	
	int numero1;
	int numero2;
	int maior = 0;
	int i = 1;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &numero1);
	
	printf("Informe o segundo numero: ");
	scanf("%d", &numero2);

	printf("\nMaximo divisor comum: %d", calcularMaxDivisor(numero1, numero2, i, maior));
}



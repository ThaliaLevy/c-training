#include<stdio.h>
//Calcular 10% de desconto do preço total quando este for maior que 1000.
main()
{	
	float preco, total, desconto = 0.1;
	printf("Informe o preco do produto: ");
	scanf("%f", &preco);
		if(preco > 1000)
	total = preco - desconto*preco;
		else
	total = preco; 
	printf("\nTotal da venda: %1.f", total);
}

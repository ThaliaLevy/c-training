#include<stdio.h>
//Calcular saldo médio.
main()
{	
	float SMAnterior, credito;
	printf("Informe o saldo medio do ano passado: ");
	scanf("%f", &SMAnterior);
	if(SMAnterior <= 200)
	credito = 0;
	else
		if(SMAnterior <= 400)
		credito = SMAnterior*0.2;
		else
			if(SMAnterior <= 600)
			credito = 0.3*SMAnterior;
			else
				if(600,01 <= SMAnterior)
				credito = 0.4*SMAnterior; 
	printf("Credito: %2.f", credito);
	printf("\nSaldo medio: %2.0f", SMAnterior);
}

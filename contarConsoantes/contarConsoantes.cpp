//Escreva uma fun��o que conte o n�mero de consoantes de uma string passada como par�metro

#include<stdio.h>

main()
{	
	int totalConsoantes = 0;
	char stringQualquer [15];
	char consoantes [22] = "bcdfghjklmnpqrstvwxyz";
	
	//Lendo a string 
	
	printf("Informe a string que deseja contar o numero de consoantes: ");
	scanf("%s", &stringQualquer);
	
	//Contando o numero de consoantes da string
	
	for(int contador = 0; contador <= sizeof(stringQualquer); contador++){
		if(stringQualquer[contador] != NULL){
			for(int contador2 = 0; contador2 <= sizeof(consoantes); contador2++){
				if(stringQualquer[contador] == consoantes[contador2]){	
					printf("\n Consoante: %c", stringQualquer[contador]);
					totalConsoantes++;
				}
			}
		}
	}
	
	//Imprimindo o total de consoantes
	
	printf("\n\n Total: %d", totalConsoantes);
}

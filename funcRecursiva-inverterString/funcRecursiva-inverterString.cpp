//Escreva uma função recursiva para inverter uma string usando recursão.

#include<stdio.h>

int i = 20;

void inverterString(char palavra[20])
{
	char alfabeto[27] = {"abcdefghijklmnopqrstuvwxyz"};
	
	if(i == 0){
		for(int k = 0; k < 26; k++){
			if(palavra[i] == alfabeto[k]){
				printf("%c", palavra[i]);
				break;	
			}
		}
	}else{
		for(int k = 0; k < 26; k++){
			if(palavra[i] == alfabeto[k]){
				printf("%c", palavra[i]);
				break;	
			}
		}
		i--;
		inverterString(palavra);
	}
}

main()
{	
	char palavra[20];
	
	printf("Informe a palavra que deseja inverter: ");
	scanf("%s", &palavra);

	printf("Palavra invertida com sucesso! \nResultado: ");
	inverterString(palavra);
}


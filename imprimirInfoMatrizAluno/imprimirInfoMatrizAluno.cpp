//	Fa�a um programa que leia uma matriz de 5 linhas e 5 colunas contendo as seguintes informa��es sobre alunos de uma disciplina:
//1.	Coluna: n�mero de matr�cula (use um inteiro)
//2.	Coluna: Avalia��o 1 
//3.	Coluna: Avalia��o 2
//4.	Coluna: M�dia dos trabalhos
//5.	Coluna: Nota final

#include<stdio.h>

main(){	
	float matriz[5][5];
	float notaFinal[5];
	float maiorNotaFinal;
	int matricula;
	float mediaAritmetica;
	
	//Leia as quatro primeiras informa��es de cada aluno - OK
	
	for(int i = 0; i < 5; i++){
		printf("\nDigite as informacoes do %d aluno. \n ", i+1);
		for(int j = 0; j < 5; j++){
			if(j == 0){
				printf("\nDigite o numero da matricula do %d aluno: ", i+1);
					scanf("%f", &matriz[i][j]);
			}else{
				if(j == 1){
					printf("\nDigite a nota da avaliacao 1 do %d aluno: ", i+1);
					scanf("%f", &matriz[i][j]);
				}else{
					if(j == 2){
						printf("\nDigite a nota da avaliacao 2 do %d aluno: ", i+1);
						scanf("%f", &matriz[i][j]);
					}else{
						if(j == 3){
							printf("\nDigite a nota da media dos trabalhos do %d aluno: ", i+1);
							scanf("%f", &matriz[i][j]);
						}
					}
				}
			}
		}
	}
	
	//Calcule a nota final como sendo a soma da m�dia das avalia��es e da m�dia dos trabalhos - OK
	
	for(int i = 0; i < 5; i++){
		notaFinal[i] = (((matriz[i][1] + matriz[i][2])/2) + matriz[i][3]);
	}
		
	//Imprima a matr�cula do aluno que obteve a maior nota final - OK

	for(int i = 0; i < 5; i++){
		if(i == 0){
			maiorNotaFinal = notaFinal[0];
			matricula = ((int)matriz[i][0]);
		}else{
			if(maiorNotaFinal < notaFinal[i]){
				maiorNotaFinal = notaFinal[i];
				matricula = ((int)matriz[i][0]);
			}
		}
	}
	
	printf("\n\nMatricula do aluno que obteve a maior nota final: %d\n", matricula); 
	
	//Imprima a m�dia aritm�tica das notas finais - OK
	
	for(int i = 0; i < 5; i++){
		mediaAritmetica = mediaAritmetica + notaFinal[i];
	}	
	
	mediaAritmetica = mediaAritmetica/5;
	printf("\nMedia aritmetica das notas finais: %.1f", mediaAritmetica);
}


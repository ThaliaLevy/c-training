// Escreva um programa que leia um vetor de 10 caracteres que representa o gabarito de uma prova. 
// A seguir, para cada um dos alunos de uma turma (5 no total), leia o vetor de respostas e conte o número de acertos. 
// Mostre a nota do aluno e uma mensagem APROVADO, se a nota for maior ou igual a 7 ou REPROVADO, caso contrário. 
// Cada questão correta vale 1 ponto.

#include<stdio.h>

main()
{	
	char gabarito[10];
	char respostaAluno[10];
	
	int i = 1, j = 1, k = 1;
	
	while(i <= 10){
		printf("Digite o gabarito da posicao %d: ", i);
		scanf("%s", &gabarito[i]);
		i++;
	}

	while(j <= 5){
		int acertos = 0, k = 1;
			
		printf("\n  Aluno %d\n ==========\n", j);
		while(k <= 10){
			printf("\nInsira a %d resposta: ", k);	
			scanf("%s", &respostaAluno[k]);
			if(respostaAluno[k] == gabarito[k]){
				acertos++;
				printf("Acertou! +1 ponto.\n");
			}else{
				printf("Errou.\n");
			}
			k++;
		}
		
		if(acertos >= 7){
			printf("\nAluno APROVADO com nota %d.\n", acertos);
		}else{
			printf("\nAluno REPROVADO com nota %d.\n", acertos);
		}
		acertos = 0;
		j++;
	}


}

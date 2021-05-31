#include<stdio.h>
//Verificar se o aluno foi aprovado ou reprovado, sendo 7 a média para aprovação.
main()
{	
	float nota01, nota02, nota03, media;
	printf("Informe a primeira nota: ");
	scanf("%f", &nota01);
	printf("Informe a segunda nota: ");
	scanf("%f", &nota02);
	printf("Informe a terceira nota: ");
	scanf("%f", &nota03);
	media = (nota01 + nota02 + nota03)/3;
		if(media < 7)
	printf("Aluno reprovado.");
		else
	printf("Aluno aprovado!");
	printf("\nNota do aluno: %1.f", media);
}

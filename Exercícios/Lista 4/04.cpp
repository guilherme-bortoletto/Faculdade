/*4 - Fa�a um programa que leia as m�dias finais de v�rios alunos de uma turma 
e mostre a maior m�dia, a menor m�dia e a m�dia aritm�tica da turma. O 
programa para quando encontrar uma m�dia negativa.*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL,"Portuguese");

int cont=0;
float nota_media,acum=0,maior,menor,media;

    printf("Digite as m�dias finais de v�rios alunos de uma turma para saber:\n - A maior m�dia;\n - A menor m�dia; \n - A m�dia aritm�tica da turma.\n*Para finalizar digite um valor negativo*.\n\n");

    printf("Digite a m�dia do aluno/a: ");
	scanf("%f",&nota_media);
	cont++;
	
	maior=nota_media;
	menor=nota_media;
	acum=acum+nota_media;
	
	while(nota_media>=0)
	{
		printf("Digite a m�dia do aluno/a: ");
		scanf("%f",&nota_media);
		
		if(nota_media>maior)
		{
			maior=nota_media;
		}
		if(nota_media<menor&&nota_media>=0)
		{
			menor=nota_media;
		}
		if(nota_media>=0)
		{
		    acum=acum+nota_media;
		    cont++;
		}
	}
		
		media=acum/cont;
		printf("\n\nO maior m�dia da sala � igual a: %.2f.",maior);
	    printf("\nO menor m�dia da sala � igual a: %.2f.",menor);
        printf("\nO m�dia aritm�tica de notas da sala � igual a: %.2f.",media);
}	


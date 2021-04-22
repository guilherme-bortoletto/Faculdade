/*4 - Faça um programa que leia as médias finais de vários alunos de uma turma 
e mostre a maior média, a menor média e a média aritmética da turma. O 
programa para quando encontrar uma média negativa.*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL,"Portuguese");

int cont=0;
float nota_media,acum=0,maior,menor,media;

    printf("Digite as médias finais de vários alunos de uma turma para saber:\n - A maior média;\n - A menor média; \n - A média aritmética da turma.\n*Para finalizar digite um valor negativo*.\n\n");

    printf("Digite a média do aluno/a: ");
	scanf("%f",&nota_media);
	cont++;
	
	maior=nota_media;
	menor=nota_media;
	acum=acum+nota_media;
	
	while(nota_media>=0)
	{
		printf("Digite a média do aluno/a: ");
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
		printf("\n\nO maior média da sala é igual a: %.2f.",maior);
	    printf("\nO menor média da sala é igual a: %.2f.",menor);
        printf("\nO média aritmética de notas da sala é igual a: %.2f.",media);
}	


//6) Escreva um programa para ler as tr�s notas obtidas por um aluno durante o semestre. Calcular a sua m�dia (aritm�tica) e informar a sua men��o Aprovado (media>= 7), Reprovado (media <= 5) e Recupera��o (media entre 5.1 e 6.9).
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necess�rio para usar setlocale
main()
{
    setlocale(LC_ALL, "Portuguese");

    float nota1,nota2,nota3,media; //variaveis que seram trabalhadas
	
	    printf("6) Escreva um programa para ler as tr�s notas obtidas por um aluno durante o semestre. Calcular a sua m�dia (aritm�tica) e informar a sua men��o Aprovado (media>= 7), Reprovado (media <= 5) e Recupera��o (media entre 5.1 e 6.9).");
	
	    printf("\n\nDigite a primeira nota: ");
	    scanf("%f",&nota1); //& ponteiro -> memoria(RAM)
	
	    printf("\n\nDigite a segunda nota: ");
	    scanf("%f",&nota2); //& ponteiro -> memoria(RAM)
	
	    printf("\n\nDigite a terceira nota: ");
	    scanf("%f",&nota3); //& ponteiro -> memoria(RAM)
	
	    media=(nota1+nota2+nota3)/3;
	    if (media>7) // condi��o
	    {
		    printf("\nAluno aprovado."); //verdadeiro
	    }
	
	    else if (media>=5.1 && media<=6.9) 
	    {
		    printf("\nAluno de recupera��o"); //verdadeiro
	    }
	
	    else 
	    {
		    printf("\nAluno reprovado");
	    }
}

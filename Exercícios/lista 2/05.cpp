//5) Faça um programa que receba um número e diga se este número está no intervalo entre 100 e 200.
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necessário para usar setlocale
main()
{
setlocale(LC_ALL, "Portuguese");

    int numero; //variaveis que seram trabalhadas
	
	printf("Faça um programa que receba um número e diga se este número está no intervalo entre 100 e 200.");
	
	printf("\n\nDigite um valor: ");
	scanf("%i",&numero); //& ponteiro -> memoria(RAM)
	
	if (numero>100 && numero<200) // condição
	{
		printf("\nEste número está no intervalo entre 100 e 200."); //verdadeiro
	}
	
	else 
	{
		printf("\nEste número não está no intervalo entre 100 e 200."); //verdadeiro
	}
}

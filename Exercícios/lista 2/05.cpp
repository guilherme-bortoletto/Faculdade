//5) Fa�a um programa que receba um n�mero e diga se este n�mero est� no intervalo entre 100 e 200.
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necess�rio para usar setlocale
main()
{
setlocale(LC_ALL, "Portuguese");

    int numero; //variaveis que seram trabalhadas
	
	printf("Fa�a um programa que receba um n�mero e diga se este n�mero est� no intervalo entre 100 e 200.");
	
	printf("\n\nDigite um valor: ");
	scanf("%i",&numero); //& ponteiro -> memoria(RAM)
	
	if (numero>100 && numero<200) // condi��o
	{
		printf("\nEste n�mero est� no intervalo entre 100 e 200."); //verdadeiro
	}
	
	else 
	{
		printf("\nEste n�mero n�o est� no intervalo entre 100 e 200."); //verdadeiro
	}
}

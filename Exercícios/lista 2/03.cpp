//3) Escreva um programa que leia dois valores inteiros distintos e informe qual � o maior.
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necess�rio para usar setlocale
main()
{
setlocale(LC_ALL, "Portuguese");

    int numero1,numero2; //variaveis que seram trabalhadas
	
	printf("3) Escreva um programa que leia dois valores inteiros distintos e informe qual � o maior.");
	
	printf("\n\nDigite o primeiro valor: ");
	scanf("%i",&numero1); //& ponteiro -> memoria(RAM)

	printf("\nDigite o segundo valor: ");
	scanf("%i",&numero2);//& ponteiro -> memoria(RAM)
		
	if (numero1>numero2) // condi��o
	{
		printf("\nPrimeiro valor � o maior."); //verdadeiro
	}
	
	else if (numero1<numero2)  //se n�o
	{
		printf("\nO segundo valor � o maior."); //falso
	}
	
	else 
	{
		printf("\nOs valores s�o iguais."); //falso
	}
}

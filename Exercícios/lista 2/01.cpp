//1) Fa�a um programa que receba um n�mero e mostre uma mensagem caso este n�mero seja maior que 10.
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necess�rio para usar setlocale
main()
{
setlocale(LC_ALL, "Portuguese");

    printf("1) Fa�a um programa que receba um n�mero e mostre uma mensagem caso este n�mero seja maior que 10.");
	
	int numero1; //variaveis que seram trabalhadas
	
	printf("\n\nDigite um n�mero: ");
	scanf("%i",&numero1); //& ponteiro -> memoria(RAM)
		
	if (numero1>10) // condi��o
	{
		printf("\nEsse n�mero � maior que 10."); //verdadeiro
	}
}

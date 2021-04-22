//1) Faça um programa que receba um número e mostre uma mensagem caso este número seja maior que 10.
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necessário para usar setlocale
main()
{
setlocale(LC_ALL, "Portuguese");

    printf("1) Faça um programa que receba um número e mostre uma mensagem caso este número seja maior que 10.");
	
	int numero1; //variaveis que seram trabalhadas
	
	printf("\n\nDigite um número: ");
	scanf("%i",&numero1); //& ponteiro -> memoria(RAM)
		
	if (numero1>10) // condição
	{
		printf("\nEsse número é maior que 10."); //verdadeiro
	}
}

//3) Escreva um programa que leia dois valores inteiros distintos e informe qual é o maior.
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necessário para usar setlocale
main()
{
setlocale(LC_ALL, "Portuguese");

    int numero1,numero2; //variaveis que seram trabalhadas
	
	printf("3) Escreva um programa que leia dois valores inteiros distintos e informe qual é o maior.");
	
	printf("\n\nDigite o primeiro valor: ");
	scanf("%i",&numero1); //& ponteiro -> memoria(RAM)

	printf("\nDigite o segundo valor: ");
	scanf("%i",&numero2);//& ponteiro -> memoria(RAM)
		
	if (numero1>numero2) // condição
	{
		printf("\nPrimeiro valor é o maior."); //verdadeiro
	}
	
	else if (numero1<numero2)  //se não
	{
		printf("\nO segundo valor é o maior."); //falso
	}
	
	else 
	{
		printf("\nOs valores são iguais."); //falso
	}
}

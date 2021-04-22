//4) Desenvolva um programa que solicite dois números inteiros, mostre a soma destes números, e avise se a soma é maior, menor ou igual a 1000. 
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necessário para usar setlocale
main()
{
setlocale(LC_ALL, "Portuguese");

    int numero1,numero2,soma; //variaveis que seram trabalhadas
	
	printf("4) Desenvolva um programa que solicite dois números inteiros, mostre a soma destes números, e avise se a soma é maior, menor ou igual a 1000. ");
	
	printf("\n\nDigite o primeiro valor: ");
	scanf("%i",&numero1); //& ponteiro -> memoria(RAM)

	printf("\nDigite o segundo valor: ");
	scanf("%i",&numero2);//& ponteiro -> memoria(RAM)
	
	soma=numero1+numero2;
	printf("\nA soma dos número = %i",soma);	
	
	if (soma<1000) // condição
	{
		printf("\nA soma é menor que 1000."); //verdadeiro
	}
	
	if (soma==1000)  //se não
	{
		printf("\nA soma é igual a 1000."); 
	}
	
	if (soma>1000)
	{
		printf("\nA soma é maior que 1000."); 
	}
}

//4) Desenvolva um programa que solicite dois n�meros inteiros, mostre a soma destes n�meros, e avise se a soma � maior, menor ou igual a 1000. 
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necess�rio para usar setlocale
main()
{
setlocale(LC_ALL, "Portuguese");

    int numero1,numero2,soma; //variaveis que seram trabalhadas
	
	printf("4) Desenvolva um programa que solicite dois n�meros inteiros, mostre a soma destes n�meros, e avise se a soma � maior, menor ou igual a 1000. ");
	
	printf("\n\nDigite o primeiro valor: ");
	scanf("%i",&numero1); //& ponteiro -> memoria(RAM)

	printf("\nDigite o segundo valor: ");
	scanf("%i",&numero2);//& ponteiro -> memoria(RAM)
	
	soma=numero1+numero2;
	printf("\nA soma dos n�mero = %i",soma);	
	
	if (soma<1000) // condi��o
	{
		printf("\nA soma � menor que 1000."); //verdadeiro
	}
	
	if (soma==1000)  //se n�o
	{
		printf("\nA soma � igual a 1000."); 
	}
	
	if (soma>1000)
	{
		printf("\nA soma � maior que 1000."); 
	}
}

//2) Fa�a um programa que receba o sexo como dado de entrada e informe se o usu�rio � homem ou mulher. 
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necess�rio para usar setlocale

main()
{
setlocale(LC_ALL, "Portuguese");

    printf("2) Fa�a um programa que receba o sexo como dado de entrada e informe se o usu�rio � homem ou mulher.");
	
	char sexo; //variaveis que seram trabalhadas
	
	printf("\n\nDigite seu sexo(M para masculino, ou F para Feminino): ");
	scanf("%s",&sexo); //& ponteiro -> memoria(RAM)
		
	if (sexo=="M") // condi��o
	{
		printf("\nVoc� � homem."); //verdadeiro
	}
	else if (sexo=="F")
	{
		printf("\nVoc� � mulher."); //falso
	}
	else
	{
		printf("\nDigite corretamente");
	}

}

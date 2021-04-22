//2) Faça um programa que receba o sexo como dado de entrada e informe se o usuário é homem ou mulher. 
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necessário para usar setlocale

main()
{
setlocale(LC_ALL, "Portuguese");

    printf("2) Faça um programa que receba o sexo como dado de entrada e informe se o usuário é homem ou mulher.");
	
	char sexo; //variaveis que seram trabalhadas
	
	printf("\n\nDigite seu sexo(M para masculino, ou F para Feminino): ");
	scanf("%s",&sexo); //& ponteiro -> memoria(RAM)
		
	if (sexo=="M") // condição
	{
		printf("\nVocê é homem."); //verdadeiro
	}
	else if (sexo=="F")
	{
		printf("\nVocê é mulher."); //falso
	}
	else
	{
		printf("\nDigite corretamente");
	}

}

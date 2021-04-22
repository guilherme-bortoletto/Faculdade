/* 1 - Faça um programa que receba valores, mostrando na tela, e calcula a soma 
e a média desses números.
Obs: O programa encerra quando receber um número negativo.*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL,"Portuguese");

int valor,cont=0;
float media,acum=0;
	
	while(valor>=0)  // condição  == verdadeiro
	{
		printf("Digite um valor: ");
		scanf("%d",&valor);
		
		if(valor>0)
		{
			acum=acum+valor;
			cont++;
		}
	}
	
	media=acum/cont;
	printf("\n\nA soma dos valores é igual a: %.1f. \n",acum);
	printf("A média dos valores é igual a: %.2f. ",media);
}

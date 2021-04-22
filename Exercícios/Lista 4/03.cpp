/*3 - Faça um programa que receba valores, mostrando na tela, no final imprima o 
maior e o menor desses números.
Obs: O programa encerra quando receber um número negativo.*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL,"Portuguese");

int valor,maior,menor;
	
    printf("Digite valores para o saber o maior e o menor desses números. \n*Para finalizar digite um valor negativo*.\n\n");
		
	printf("Digite um valor: ");
	scanf("%d",&valor);
	
	maior=valor;
	menor=valor;
	
	while(valor>=0)  // condição  == verdadeiro
	{
		printf("Digite um valor: ");
		scanf("%d",&valor);
		
		if(valor>maior)
		{
			maior=valor;
		}
		if(valor<menor&&valor>=0)
		{
			menor=valor;
		}
	}
	
	printf("\n\nO maior valor é igual a: %d.",maior);
	printf("\nO menor valor é igual a: %d.",menor);
}

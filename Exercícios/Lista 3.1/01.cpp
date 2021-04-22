/*1 - Escreva um algoritmo que receba 15 números e imprima quantos números maiores 
que 30 foram digitados.*/
#include<stdio.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");

    int i, num, cont=0, acum=0;
    
        for (i=1; i<=15; i++)
	    {
	    	printf("Digite um número: ");
	    	scanf("%d",&num);
	    	
        	if(num>30)
        	{
        		cont++;
        		acum=acum+cont;
			}
		}
		
		printf("A quantidade de números maiores que 30 que foram digitados é: %d",acum);
}
		

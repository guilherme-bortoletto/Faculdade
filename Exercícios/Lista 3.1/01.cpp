/*1 - Escreva um algoritmo que receba 15 n�meros e imprima quantos n�meros maiores 
que 30 foram digitados.*/
#include<stdio.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");

    int i, num, cont=0, acum=0;
    
        for (i=1; i<=15; i++)
	    {
	    	printf("Digite um n�mero: ");
	    	scanf("%d",&num);
	    	
        	if(num>30)
        	{
        		cont++;
        		acum=acum+cont;
			}
		}
		
		printf("A quantidade de n�meros maiores que 30 que foram digitados �: %d",acum);
}
		

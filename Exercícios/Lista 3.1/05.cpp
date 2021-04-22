/*5 - Criar um algoritmo que leia dez números inteiros e imprima o maior e o segundo maior 
número da lista.*/
#include<stdio.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");

    int i, num, maior=0,segundo=0;
    
        for(i=10; i>0; i--)
        {
        	printf("\nDigite um número: ");
            scanf("%d",&num);
            
            if(i==5)
            {
            	maior=num;
            	segundo=num;
			}
            if(num>maior)
            {
            	maior=num;
			}
			else if(num<maior&&num>segundo)
			{
				segundo=num;
			}
		}
	    
		printf("\n\nO maior número é igual a: %d.",maior);
	    printf("\n\nO segundo maior número é igual a: %d.",segundo);
}
	    

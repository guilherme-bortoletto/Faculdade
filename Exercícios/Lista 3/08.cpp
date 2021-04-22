//8 - Faça um programa que leia um número n e imprima se ele é primo ou não. 
#include<stdio.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");

    int i, num, cont=0;
    
        printf("Digite um número para saber se ele é primo ou não: ");
        scanf("%d",&num);
        
        for (i=2; i<num; i++)
	    {
        	if(num%i==0)
        	{
        		cont++;
        		break;
			}
		}
		
		if(cont>0||num==1)
		{
			printf("\n\n%d não é um número primo.",num);
		}
		else
		{
			printf("\n\n%d é um número primo.",num);
		}
}

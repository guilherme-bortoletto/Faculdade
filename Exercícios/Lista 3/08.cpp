//8 - Fa�a um programa que leia um n�mero n e imprima se ele � primo ou n�o. 
#include<stdio.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");

    int i, num, cont=0;
    
        printf("Digite um n�mero para saber se ele � primo ou n�o: ");
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
			printf("\n\n%d n�o � um n�mero primo.",num);
		}
		else
		{
			printf("\n\n%d � um n�mero primo.",num);
		}
}

/*4 - Escreva um algoritmo que leia 20 n�meros e imprima a soma dos positivos e o total 
de n�meros negativos.*/
#include<stdio.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");

    int i, num, acum=0, cont=0; 
        
        for(i=1; i<=20; i++)
        {
        	printf("Digite um n�mero: ");
        	scanf("%d",&num);
        	
        	if(num>0)
        	{
        		acum=acum+num;
			}
        	else
        	{
        		cont++;
			}
		}
    
        printf("\n\nSoma dos positivos: %d.",acum);
        printf("\nTotal de n�meros negativos: %d.",cont);
}

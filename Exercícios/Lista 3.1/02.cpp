/*2 - Criar um algoritmo que imprima todos os n�meros de 1 at� 100, inclusive, e a soma 
do quadrado desses n�meros.*/
#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");

    int i, acum=0; 
    float pot, acumpot=0;
        
        for(i=1; i<=100; i++)
        {
        	printf("\n%d",i);
        	acum=acum+i;
        	pot=pow(i,2);
        	acumpot=acumpot+pot;
		}
    
        printf("\n\nSoma dos n�meros: %d.",acum);
        printf("\nSoma dos n�meros: %.2f.",acumpot);
}

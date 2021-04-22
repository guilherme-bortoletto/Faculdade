/*2 - Criar um algoritmo que imprima todos os números de 1 até 100, inclusive, e a soma 
do quadrado desses números.*/
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
    
        printf("\n\nSoma dos números: %d.",acum);
        printf("\nSoma dos números: %.2f.",acumpot);
}

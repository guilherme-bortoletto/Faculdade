//3 - Escreva um algoritmo que imprima todos os números ímpares do intervalo fechado de 1 a 100.
#include<stdio.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");

    int i;
        
        for(i=1; i<=100; i+=2)
        {
        	printf("\n%d",i);
        }
}

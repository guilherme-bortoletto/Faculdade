//2) Ler 2 números inteiros e soma-los. Se a soma for maior que 10, mostrar o resultado da soma.
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

   int nmr1,nmr2,soma;
   
   printf("Insira o primeiro número: ");
   scanf("%d",&nmr1);
   
   printf("Insira o primeiro número: ");
   scanf("%d",&nmr2);
   
   soma=nmr1+nmr2;
   if(soma>20)
   {
   	    printf("\n\nA soma de %d e %d igual a: %d.",nmr1,nmr2,soma);
   }
   else
   {
   	    printf("\n\nDigite números cuja a soma seja maior que 10.");
   }
}

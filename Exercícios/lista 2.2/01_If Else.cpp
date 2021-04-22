//1) Ler um número e se for maior que 20 imprimir a metade desse número.
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

   float nmr,met;
   
   printf("Insira um número: ");
   scanf("%f",&nmr);
   
   met=nmr/2;
   if(nmr>20)
   {
   	    printf("\n\nA metade de %.0f é igual a: %.2f.",nmr,met);
   }
   else
   {
   	    printf("\n\nDigite um número maior que vinte.");
   }
}

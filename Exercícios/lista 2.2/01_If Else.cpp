//1) Ler um n�mero e se for maior que 20 imprimir a metade desse n�mero.
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

   float nmr,met;
   
   printf("Insira um n�mero: ");
   scanf("%f",&nmr);
   
   met=nmr/2;
   if(nmr>20)
   {
   	    printf("\n\nA metade de %.0f � igual a: %.2f.",nmr,met);
   }
   else
   {
   	    printf("\n\nDigite um n�mero maior que vinte.");
   }
}

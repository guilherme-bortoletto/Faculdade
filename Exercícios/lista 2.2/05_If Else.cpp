/*4) Solicitar salario, presta��o. Se presta��o for maior que 20% do sal�rio, 
imprimir: Empr�stimo n�o pode ser concedido, sen�o Imprimir Empr�stimo pode 
ser concedido. */
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");
   
   int nmr;
   
   printf("Insira um n�mero: ");
   scanf("%d",&nmr);

   if(nmr>20)
   {
   	    printf("\n\nO n�mero inserido, � maior do que 20.",nmr);
   }
   else if (nmr<20)
   {
   	    printf("\n\nO n�mero inserido � menor do que 20.",nmr);
   }
   else
   {
   	    printf("\n\nO n�mero inserido � igual a 20.",nmr);
   }
}

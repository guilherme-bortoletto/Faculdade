/*4) Solicitar salario, presta��o. Se presta��o for maior que 20% do sal�rio, 
imprimir: Empr�stimo n�o pode ser concedido, sen�o Imprimir Empr�stimo pode 
ser concedido. */
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

   float sal, cond;
   
   int prest;
   
   printf("Insira o valor do sal�rio: ");
   scanf("%f",&sal);
   
   printf("Insira o valor da presta��o: ");
   scanf("%i",&prest);
   
cond=sal/5;
   if(prest>cond)
   {
   	    printf("\n\nEmpr�stimo n�o pode ser concedido");
   }
   else
   {
   	    printf("\n\nEmpr�stimo pode ser concedido.");
   }
}

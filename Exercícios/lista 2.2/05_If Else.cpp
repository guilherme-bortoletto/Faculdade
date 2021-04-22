/*4) Solicitar salario, prestação. Se prestação for maior que 20% do salário, 
imprimir: Empréstimo não pode ser concedido, senão Imprimir Empréstimo pode 
ser concedido. */
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");
   
   int nmr;
   
   printf("Insira um número: ");
   scanf("%d",&nmr);

   if(nmr>20)
   {
   	    printf("\n\nO número inserido, é maior do que 20.",nmr);
   }
   else if (nmr<20)
   {
   	    printf("\n\nO número inserido é menor do que 20.",nmr);
   }
   else
   {
   	    printf("\n\nO número inserido é igual a 20.",nmr);
   }
}

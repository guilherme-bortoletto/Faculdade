/*4) Solicitar salario, prestação. Se prestação for maior que 20% do salário, 
imprimir: Empréstimo não pode ser concedido, senão Imprimir Empréstimo pode 
ser concedido. */
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

   float sal, cond;
   
   int prest;
   
   printf("Insira o valor do salário: ");
   scanf("%f",&sal);
   
   printf("Insira o valor da prestação: ");
   scanf("%i",&prest);
   
cond=sal/5;
   if(prest>cond)
   {
   	    printf("\n\nEmpréstimo não pode ser concedido");
   }
   else
   {
   	    printf("\n\nEmpréstimo pode ser concedido.");
   }
}

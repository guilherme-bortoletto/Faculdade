/*6) Um comerciante comprou um produto e quer vendê-lo com lucro de 45% se o 
valor da compra for menor que 20,00; caso contrário, o lucro será de 30%. Entrar 
com o valor do produto e imprimir o valor da venda.*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

   float valor, luc1, luc2;
   
   printf("Insira o valor da compra: ");
   scanf("%f",&valor);

luc1=valor*45/100+valor;
luc2=valor*30/100+valor;
   if(valor<20)
   {
   	    printf("\n\nValor de venda igual a: R$ %.2f",luc1);
   }
   else
   {
   	    printf("\n\nValor de venda igual a: %.2f.",luc2);
   }
}

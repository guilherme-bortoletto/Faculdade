//5) Informar um saldo e imprimir o saldo com reajuste de 1%
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

   float valor,reajuste;
   
   printf("Insira um valor mo qual você deseja que haja o reajuste: ");
   scanf("%f",&valor);
   
reajuste=(valor*1/100)+valor;
   printf("O valor com reajuste é igual a: %.3f",reajuste);
}

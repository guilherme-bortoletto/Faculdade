/*Tipos de Dados Básicos.
1) Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 
10%.*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

   float valor,reajuste;
   
   printf("Insira um valor mo qual você deseja que haja o reajuste: ");
   scanf("%f",&valor);
   
reajuste=(valor*1/10)+valor;
   printf("O valor com reajuste é igual a: %.3f",reajuste);
}
   
   

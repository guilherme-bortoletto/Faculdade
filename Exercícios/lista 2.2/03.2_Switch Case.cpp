/*Um funcion�rio ir� receber um aumento de acordo com o seu plano de
trabalho, de acordo com a tabela abaixo:
Plano Aumento: A 10%; B 15%; C 20%
Fa�a um programa que leia o plano de trabalho e o sal�rio atual de um 
funcion�rio e calcula e imprime o seu novo sal�rio. Use o comando switch.*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

char aum; // swich
float salary,nsalary; //sal�rio inicial, sal�rio final

   printf("Digite qual Plano Aumento ser� feito (a(10%), b(15%) ou c(20%)): ");
   scanf("%c",&aum);
   
   printf("\nDigite o sal�rio no qual ser� realizado o Plano Aumento:  ");
   scanf("%f",&salary);

switch(aum) // if(menu>4) // operadores relacionais
{
   case 'a':
       nsalary=salary*10/100+salary;
	   printf("\n\nNovo sal�rio: R$ %.2f",nsalary);
   break;

   case 'b':
       nsalary=salary*15/100+salary;
       printf("\n\nNovo sal�rio: R$ %.2f",nsalary);
   break;

   case 'c':
       nsalary=salary*20/100+salary;
       printf("\n\nNovo sal�rio: R$ %.2f",nsalary);
   break;
   
   default:
       printf("\n\nDigite um Planpo Aumento v�lido(a, b ou c).");
}
}

/*Um funcionário irá receber um aumento de acordo com o seu plano de
trabalho, de acordo com a tabela abaixo:
Plano Aumento: A 10%; B 15%; C 20%
Faça um programa que leia o plano de trabalho e o salário atual de um 
funcionário e calcula e imprime o seu novo salário. Use o comando switch.*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

char aum; // swich
float salary,nsalary; //salário inicial, salário final

   printf("Digite qual Plano Aumento será feito (a(10%), b(15%) ou c(20%)): ");
   scanf("%c",&aum);
   
   printf("\nDigite o salário no qual será realizado o Plano Aumento:  ");
   scanf("%f",&salary);

switch(aum) // if(menu>4) // operadores relacionais
{
   case 'a':
       nsalary=salary*10/100+salary;
	   printf("\n\nNovo salário: R$ %.2f",nsalary);
   break;

   case 'b':
       nsalary=salary*15/100+salary;
       printf("\n\nNovo salário: R$ %.2f",nsalary);
   break;

   case 'c':
       nsalary=salary*20/100+salary;
       printf("\n\nNovo salário: R$ %.2f",nsalary);
   break;
   
   default:
       printf("\n\nDigite um Planpo Aumento válido(a, b ou c).");
}
}

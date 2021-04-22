/*2) 3) Crie uma calculadora usando a instrução SWITCH, que pergunte qual das 
operações básicas quer fazer (+, -, * e /), em seguida peça os dois números e 
mostre o resultado da operação matemática entre eles.*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

char op; // int ou char -> exclui float
int num1,num2;
float answer;

   printf("Digite qual operação básica deseja fazer (soma(+), subtração(-), multiplicação(*) ou divisão(/)): ");
   scanf("%c",&op);

   printf("\nDigite o primeiro número:  ");
   scanf("%i",&num1);
   
   printf("\nDigite o segundo número:  ");
   scanf("%i",&num2);

switch(op) // if(menu>4) // operadores relacionais
{
   case '+':
       answer=num1+num2;
	   printf("\n\nResultado do cálculo: R$ %.2f",answer);
   break;

   case '-':
       answer=num1-num2;
       printf("\n\nResultado do cálculo: R$ %.2f",answer);
   break;

   case '*':
       answer=num1*num2;
       printf("\n\nResultado do cálculo: R$ %.2f",answer);
   break;
   
   case '/':
       answer=num1/num2;
       printf("\n\nResultado do cálculo: R$ %.2f",answer);
   break;

   default:
       printf("\n\nDigite uma operação válida(+,-,* ou /).");
}
}

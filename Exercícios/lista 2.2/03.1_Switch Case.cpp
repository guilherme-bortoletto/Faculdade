/*2) 3) Crie uma calculadora usando a instru��o SWITCH, que pergunte qual das 
opera��es b�sicas quer fazer (+, -, * e /), em seguida pe�a os dois n�meros e 
mostre o resultado da opera��o matem�tica entre eles.*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

char op; // int ou char -> exclui float
int num1,num2;
float answer;

   printf("Digite qual opera��o b�sica deseja fazer (soma(+), subtra��o(-), multiplica��o(*) ou divis�o(/)): ");
   scanf("%c",&op);

   printf("\nDigite o primeiro n�mero:  ");
   scanf("%i",&num1);
   
   printf("\nDigite o segundo n�mero:  ");
   scanf("%i",&num2);

switch(op) // if(menu>4) // operadores relacionais
{
   case '+':
       answer=num1+num2;
	   printf("\n\nResultado do c�lculo: R$ %.2f",answer);
   break;

   case '-':
       answer=num1-num2;
       printf("\n\nResultado do c�lculo: R$ %.2f",answer);
   break;

   case '*':
       answer=num1*num2;
       printf("\n\nResultado do c�lculo: R$ %.2f",answer);
   break;
   
   case '/':
       answer=num1/num2;
       printf("\n\nResultado do c�lculo: R$ %.2f",answer);
   break;

   default:
       printf("\n\nDigite uma opera��o v�lida(+,-,* ou /).");
}
}

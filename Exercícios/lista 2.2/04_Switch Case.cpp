/*4) Um posto est� vendendo combust�veis com a seguinte tabela de descontos:
- �lcool: at� 20 litros, desconto de 3% por litro e acima de 20 litros, desconto de
5% por litro;
- Gasolina: at� 20 litros, desconto de 4% por litro e acima de 20 litros, desconto
de 6% por litro.
Escreva um algoritmo que leia o n�mero de litros vendidos, o tipo de combust�vel 
(A-�lcool, G-gasolina) e imprima o valor a ser pago pelo cliente.
Considere que o pre�o do litro da gasolina � R$ 3.79 e o pre�o do litro do �lcool
� R$ 2,19*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

char combust; // switch
float vol,alc=2.19,gas=3.79,ival,fval; //volume(litros),pre�o do alcool, pre�o da gasolina, valor incial(s/ desc), valor final(c/ desc)

   printf("Digite o tipo de combust�vel desejado (Alcool(a), Gasolina(g)): ");
   scanf("%c",&combust);
   
   printf("\nDigite quantos litros de combust�vel ser� colocado:  ");
   scanf("%f",&vol);

switch(combust) // if(menu>4) // operadores relacionais
{
   case 'a':
   	ival=vol*alc;
       if(vol<=20)
       {
       	   fval=ival-ival*0.03;
	   }
	   else
	   {
	   	   fval=ival-ival*0.05;
	   }
	printf("\n\nValor a ser pago: R$ %.2f",fval);
   break;

   case 'g':
    ival=vol*gas;
       if(vol<=20)
       {
       	   fval=ival-ival*0.04;
	   }
	   else
	   {
	   	   fval=ival-ival*0.06;
	   }
	printf("\n\nValor a ser pago: R$ %.2f",fval);
   break;

   default:
       printf("\n\nDigite um tipo de combust�vel v�lido(a ou g).");
}
}

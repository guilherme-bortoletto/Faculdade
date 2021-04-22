/*4) Um posto está vendendo combustíveis com a seguinte tabela de descontos:
- Álcool: até 20 litros, desconto de 3% por litro e acima de 20 litros, desconto de
5% por litro;
- Gasolina: até 20 litros, desconto de 4% por litro e acima de 20 litros, desconto
de 6% por litro.
Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível 
(A-álcool, G-gasolina) e imprima o valor a ser pago pelo cliente.
Considere que o preço do litro da gasolina é R$ 3.79 e o preço do litro do álcool
é R$ 2,19*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

char combust; // switch
float vol,alc=2.19,gas=3.79,ival,fval; //volume(litros),preço do alcool, preço da gasolina, valor incial(s/ desc), valor final(c/ desc)

   printf("Digite o tipo de combustível desejado (Alcool(a), Gasolina(g)): ");
   scanf("%c",&combust);
   
   printf("\nDigite quantos litros de combustível será colocado:  ");
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
       printf("\n\nDigite um tipo de combustível válido(a ou g).");
}
}

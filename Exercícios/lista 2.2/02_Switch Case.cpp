/*2) Suponha que voc� atrasou uma conta. A cada m�s que voc� deixa de pagar, 
ser� cobrado 1% de juros no valor inicial.
Ou seja, se voc� atrasar um m�s, ir� pagar 1%. Se atrasar 3 meses, ir� pagar 
3% etc. Vamos supor que voc� pode atrasar, no m�ximo, 5 meses.*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

int parc; // int ou char -> exclui float
float parci,parcf;

   printf("Digite o valor inicial da parcela: ");
   scanf("%f",&parci);

   printf("Digite o n�mero de parcelas atrasadas (at� 5):  \n");
   scanf("%i",&parc);

switch(parc) // if(menu>4) // operadores relacionais
{
   case 1:
       parcf=(parci*parc/100)+parci;
   break;

   case 2:
       parcf=((parci*parc/100)+parci)*2;
   break;

   case 3:
       parcf=((parci*parc/100)+parci)*3;
   break;
   
   case 4:
       parcf=((parci*parc/100)+parci)*4;
   break;

   case 5:
       parcf=((parci*parc/100)+parci)*5;
   break;

   default:
       printf("Digite de o n�mero de parcelas v�lido(1 a 5).");
}
   printf("Valor em atraso a pagar: R$ %.2f",parcf);
}

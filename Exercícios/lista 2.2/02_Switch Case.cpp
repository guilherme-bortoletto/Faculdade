/*2) Suponha que você atrasou uma conta. A cada mês que você deixa de pagar, 
será cobrado 1% de juros no valor inicial.
Ou seja, se você atrasar um mês, irá pagar 1%. Se atrasar 3 meses, irá pagar 
3% etc. Vamos supor que você pode atrasar, no máximo, 5 meses.*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

int parc; // int ou char -> exclui float
float parci,parcf;

   printf("Digite o valor inicial da parcela: ");
   scanf("%f",&parci);

   printf("Digite o número de parcelas atrasadas (até 5):  \n");
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
       printf("Digite de o número de parcelas válido(1 a 5).");
}
   printf("Valor em atraso a pagar: R$ %.2f",parcf);
}

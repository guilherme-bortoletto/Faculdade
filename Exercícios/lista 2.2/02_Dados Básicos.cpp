//2) Informar tr�s n�meros inteiros e imprimir a m�dia
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

   float v1,v2,v3,med;
   
   printf("INSIRA TR�S VALORES PARA O CALCULO DA M�DIA.\n\n");
   
   printf("Insira o primeiro valor: ");
   scanf("%f",&v1);
   
   printf("Insira o segundo valor: ");
   scanf("%f",&v2);
   
   printf("Insira o terceiro valor: ");
   scanf("%f",&v3);
   
med=(v1+v2+v3)/3;
   printf("\n\nA m�dia dos tr�s valores � igual a: %.3f",med);
}

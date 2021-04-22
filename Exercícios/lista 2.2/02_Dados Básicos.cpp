//2) Informar três números inteiros e imprimir a média
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

   float v1,v2,v3,med;
   
   printf("INSIRA TRÊS VALORES PARA O CALCULO DA MÉDIA.\n\n");
   
   printf("Insira o primeiro valor: ");
   scanf("%f",&v1);
   
   printf("Insira o segundo valor: ");
   scanf("%f",&v2);
   
   printf("Insira o terceiro valor: ");
   scanf("%f",&v3);
   
med=(v1+v2+v3)/3;
   printf("\n\nA média dos três valores é igual a: %.3f",med);
}

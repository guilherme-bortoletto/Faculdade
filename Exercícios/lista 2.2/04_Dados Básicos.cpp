//4) Ler um n�mero inteiro e imprimir seu quadrado.
#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

   int nmr,quadrado;
   
   printf("Informe um n�mero inteiro para o calculo do seu quadrado.\n\n");
   
   printf("Insira o n�mero desejado: ");
   scanf("%d",&nmr);
   
quadrado=pow(nmr,2);
   printf("\n\nO quadrado de %d � igual a: %d.",nmr,quadrado);
}

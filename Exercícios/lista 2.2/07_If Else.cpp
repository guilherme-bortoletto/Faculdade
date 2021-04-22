/*7) Ler um número inteiro e verificar se está compreendido entre 20 e 80. Se tiver, 
imprimir “parabéns”, senão imprimir “fora do intervalo”.*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

   int nmr;
   
   printf("Insira um número: ");
   scanf("%i",&nmr);

   if(nmr>20 && nmr<80)
   {
   	    printf("\n\nParabéns!");
   }
   else
   {
   	    printf("\n\nFora do intervalo.");
   }
}

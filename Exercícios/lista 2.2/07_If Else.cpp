/*7) Ler um n�mero inteiro e verificar se est� compreendido entre 20 e 80. Se tiver, 
imprimir �parab�ns�, sen�o imprimir �fora do intervalo�.*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

   int nmr;
   
   printf("Insira um n�mero: ");
   scanf("%i",&nmr);

   if(nmr>20 && nmr<80)
   {
   	    printf("\n\nParab�ns!");
   }
   else
   {
   	    printf("\n\nFora do intervalo.");
   }
}

//3) Ler 1 n�mero. Se positivo, imprimir raiz quadrada sen�o o quadrado.
#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

   float nmr,raiz,pot;
   
   printf("Insira um n�mero: ");
   scanf("%f",&nmr);
   
raiz=sqrt(nmr);
pot=pow(nmr,2);
   if(nmr>0)
   {
   	    printf("\n\nA raiz de %.1f � igual a: %f.",nmr,raiz);
   }
   else if (nmr<0)
   {
   	    printf("\n\nO quadrado de %.1f � igual a: %.1f.",nmr,pot);
   }
   else
   {
   	    printf("\n\nDeclare um valor diferente de 0.");
   }
}

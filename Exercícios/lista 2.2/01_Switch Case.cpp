/*1) Informe o tipo de carro (A, B e C). Informe o percurso rodado em km e calcule 
o consumo estimado, conforme o tipo, sendo (A=8, B=9 e C=12) km/litro.*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

char car; // int ou char -> exclui float
float percurso,consumo;

   printf("Digite o tipo de carro:  \n");
   printf("a - Tipo A \n");
   printf("b - Tipo B \n");
   printf("c - Tipo C \n");
   scanf("%c",&car);

   printf ("\nDigite a distância do percurso (em km): ");
   scanf ("%f",&percurso);

switch(car) // if(menu>4) // operadores relacionais
{
   case 'a':
       consumo=percurso/8;
   break;

   case 'b':
       consumo=percurso/9;
   break;

   case 'c':
       consumo=percurso/12;
   break;

   default:
       printf("Digite um tipo válido (a, b, ou c)");
}
   printf("Consumo: %.2f",consumo);
}



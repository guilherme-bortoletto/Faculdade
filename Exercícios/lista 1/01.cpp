#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necess�rio para usar setlocale
main()
{
setlocale(LC_ALL, "Portuguese");

printf("1 - Informar tr�s n�meros inteiros e imprimir a m�dia.");

float numero1, numero2, numero3, media; // float -> %f

printf("\n\nDigite o primeiro n�mero: ");
scanf("%f",&numero1); //& ponteiro -> memoria(RAM)

printf("\nDigite o segundo n�mero: ");
scanf("%f",&numero2); //& ponteiro -> memoria(RAM)

printf("\nDigite o terceiro n�mero: ");
scanf("%f",&numero3); //& ponteiro -> memoria(RAM)

media = (numero1+numero2+numero3)/3;
printf("\nA m�dia dos n�meros � igual a: %f",media);
}

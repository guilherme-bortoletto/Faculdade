#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necessário para usar setlocale
main()
{
setlocale(LC_ALL, "Portuguese");

printf("1 - Informar três números inteiros e imprimir a média.");

float numero1, numero2, numero3, media; // float -> %f

printf("\n\nDigite o primeiro número: ");
scanf("%f",&numero1); //& ponteiro -> memoria(RAM)

printf("\nDigite o segundo número: ");
scanf("%f",&numero2); //& ponteiro -> memoria(RAM)

printf("\nDigite o terceiro número: ");
scanf("%f",&numero3); //& ponteiro -> memoria(RAM)

media = (numero1+numero2+numero3)/3;
printf("\nA média dos números é igual a: %f",media);
}

/*8 - Fazer um programa que imprima a m�dia aritm�tica dos n�meros 8,9 e 7. A m�dia dos
n�meros 4, 5 e 6. A soma das duas m�dias. A m�dia das medias. */
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necess�rio para usar setlocale
main()
{
setlocale(LC_ALL, "Portuguese");

printf("8 - Fazer um programa que imprima a m�dia aritm�tica dos n�meros 8,9 e 7. A m�dia dos n�meros 4, 5 e 6. A soma das duas m�dias. A m�dia das medias.");

float media1, media2, smedia, mediaf; // float -> %f

media1=(8+9+7)/3;
printf("\n\nM�dia aritm�tica dos n�meros 8,9 e 7: %f",media1);

media2=(4+5+6)/3;
printf("\nM�dia dos n�meros 4, 5 e 6: %f",media2);

smedia=media1+media2;
printf("\nA soma das m�dias: %f",smedia);

mediaf=smedia/2;
printf("\nM�dia das m�dias: %f",mediaf);
}

/*8 - Fazer um programa que imprima a média aritmética dos números 8,9 e 7. A média dos
números 4, 5 e 6. A soma das duas médias. A média das medias. */
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necessário para usar setlocale
main()
{
setlocale(LC_ALL, "Portuguese");

printf("8 - Fazer um programa que imprima a média aritmética dos números 8,9 e 7. A média dos números 4, 5 e 6. A soma das duas médias. A média das medias.");

float media1, media2, smedia, mediaf; // float -> %f

media1=(8+9+7)/3;
printf("\n\nMédia aritmética dos números 8,9 e 7: %f",media1);

media2=(4+5+6)/3;
printf("\nMédia dos números 4, 5 e 6: %f",media2);

smedia=media1+media2;
printf("\nA soma das médias: %f",smedia);

mediaf=smedia/2;
printf("\nMédia das médias: %f",mediaf);
}

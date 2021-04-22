//6) Cálculo de um salário líquido de um professor. Serão fornecidos valor da hora aula, número de aulas dadas e o % de desconto do INSS.
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

   float vaula,naula,desc,liq;
   
   printf("Informe o valor da hora aula, número de aulas dadas e o % de desconto do INSS.\n\n");
   
   printf("Insira o valor da hora aula: ");
   scanf("%f",&vaula);
   
   printf("Insira o número de aulas dadas: ");
   scanf("%f",&naula);
   
   printf("Insira o % de desconto do INSS: ");
   scanf("%f",&desc);
   
liq=vaula*naula-(vaula*naula*desc/100);
   printf("\n\nO salário líquido é igual a: R$ %.2f.",liq);
}

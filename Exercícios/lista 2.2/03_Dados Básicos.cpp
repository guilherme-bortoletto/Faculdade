//3) Informe o tempo gasto numa viagem (em horas), a velocidade m�dia e calcule o consumo.
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

   float time,velo,cons;
   
   printf("Informe o tempo gasto numa viagem (em horas) e a velocidade m�dia (km/h) para o calculo da dist�ncia percorrida.\n\n");
   
   printf("Insira o tempo gasto: ");
   scanf("%f",&time);
   
   printf("Insira a velocidade m�dia: ");
   scanf("%f",&velo);
   
cons=velo*time;
   printf("\n\nA dist�ncia percorrida � igual a: %.1f quil�metros.",cons);
}

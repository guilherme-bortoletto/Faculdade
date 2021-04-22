//3) Informe o tempo gasto numa viagem (em horas), a velocidade média e calcule o consumo.
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");

   float time,velo,cons;
   
   printf("Informe o tempo gasto numa viagem (em horas) e a velocidade média (km/h) para o calculo da distância percorrida.\n\n");
   
   printf("Insira o tempo gasto: ");
   scanf("%f",&time);
   
   printf("Insira a velocidade média: ");
   scanf("%f",&velo);
   
cons=velo*time;
   printf("\n\nA distância percorrida é igual a: %.1f quilômetros.",cons);
}

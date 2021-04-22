//9 - Informe o tempo gasto numa viagem (em horas), a velocidade média e calcule o consumo.
#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float tempo,velo_media,eficiencia, distancia;
	
	   printf("Informe o tempo gasto(em horas): ");
	   scanf("%f",&tempo);
	
	   printf("\nInforme a velocidade média(km/h): ");
	   scanf("%f",&velo_media);
	   
	   printf("\nInforme quantos L/Km de gasolina: ");
	   scanf("%f",&eficiencia);
	   
	   distancia=tempo*velo_media;
	   printf("\n\nO consumo foi de %.2f L.",distancia/eficiencia);	   
}

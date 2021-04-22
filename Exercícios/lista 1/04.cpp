#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necessário para usar setlocale

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("4 - Ler uma temperatura em graus Celsius e transformá-la em graus Fahrenheit.");
	
	float c,f;
	
	printf("\n\nDigite a temperatura em graus Celsius: ");
	scanf("%f",&c);
	
	f= (9*c+160)/5;
	printf("\nA termperatura em Fahrenheit é de: %f°F",f);
}

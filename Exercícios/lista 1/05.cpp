#include<math.h> 
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necessário para usar setlocale
#define PI 3.14159265

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("5 - Faça um programa que calcule e mostre a área de um círculo.");
	
	float r,potencia,a;
	
	printf("\n\nDigite o raio do círculo em cm: ");
	scanf("%f",&r);
	
	potencia=pow(r,2);
	a=PI*potencia;
	printf("\nA área do círculo é de: %f cm^2",a);
}

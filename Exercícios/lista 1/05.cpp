#include<math.h> 
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necess�rio para usar setlocale
#define PI 3.14159265

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("5 - Fa�a um programa que calcule e mostre a �rea de um c�rculo.");
	
	float r,potencia,a;
	
	printf("\n\nDigite o raio do c�rculo em cm: ");
	scanf("%f",&r);
	
	potencia=pow(r,2);
	a=PI*potencia;
	printf("\nA �rea do c�rculo � de: %f cm^2",a);
}

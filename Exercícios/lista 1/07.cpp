//7 - Informar um pre�o de um produto e calcular novo pre�o com desconto de 9%.
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necess�rio para usar setlocale

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("7 - Informar um pre�o de um produto e calcular novo pre�o com desconto de 9%%.");
	
	float valor;
	
	printf("\n\n\nDigite valor que deseja que seja feito um desconto de 10 porcento: ");
	scanf("%f",&valor);
	
	valor=valor*0.91;
	printf("\nO valor com o desconto � de: %.2f",valor);
}

#include<math.h> //necess�rio para executar fun��es matem�ticas
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necess�rio para usar setlocale

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("2 - Ler um n�mero inteiro e imprimir seu quadrado.");
		
	int numero;
	float potencia;
	
	printf("\n\nDigite um n�mero: ");
	scanf("%i",&numero);
	
	potencia = pow(numero,2);
	printf("\n\nO quadrado do n�mero � igual a: %.0f", potencia);
}

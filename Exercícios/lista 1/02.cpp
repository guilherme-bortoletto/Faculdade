#include<math.h> //necessário para executar funções matemáticas
#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necessário para usar setlocale

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("2 - Ler um número inteiro e imprimir seu quadrado.");
		
	int numero;
	float potencia;
	
	printf("\n\nDigite um número: ");
	scanf("%i",&numero);
	
	potencia = pow(numero,2);
	printf("\n\nO quadrado do número é igual a: %.0f", potencia);
}

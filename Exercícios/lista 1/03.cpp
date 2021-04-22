#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necessário para usar setlocale

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("3 - Ler um número inteiro e imprimir seu sucessor e seu antecessor.");
	
	int numero,sucessor,antecessor;
	
	printf("\n\nDigite um número: ");
	scanf("%i",&numero);
	
	sucessor=numero+1;
	printf("\nSeu sucessor é igual a: %i",sucessor);
	
	antecessor=numero-1;
	printf("\nSeu antecessor é igual a: %i",antecessor);
}

#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necess�rio para usar setlocale

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("3 - Ler um n�mero inteiro e imprimir seu sucessor e seu antecessor.");
	
	int numero,sucessor,antecessor;
	
	printf("\n\nDigite um n�mero: ");
	scanf("%i",&numero);
	
	sucessor=numero+1;
	printf("\nSeu sucessor � igual a: %i",sucessor);
	
	antecessor=numero-1;
	printf("\nSeu antecessor � igual a: %i",antecessor);
}

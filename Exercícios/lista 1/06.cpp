#include<stdio.h> // biblioteca padrao io
#include<locale.h> //necessário para usar setlocale

int main()
{
setlocale(LC_ALL, "Portuguese");
float valor,reajuste;
	
	printf("6 - Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%.");
	
	printf("\n\n\nDigite valor que deseja que seja feito o reajuste de 10 porcento: ");
	scanf("%f",&valor);
	
	reajuste=valor*1.1;
	printf("\nO valor com o reajuste é de: %.2f",reajuste);
}

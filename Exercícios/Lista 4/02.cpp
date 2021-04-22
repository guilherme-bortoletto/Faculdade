/* 2 - Escrever um programa que receba vários números inteiros no teclado. E no 
final imprimir a média dos números múltiplos de 3. Para sair digitar 0 (zero).*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL,"Portuguese");

int valor=1,cont=0;
float media,acum=0;
	
    printf("Digite valores inteiros para saber média dos números múltiplos de 3 entre eles. \n*Para finalizar digite 0*.\n\n");
	    
	while(valor!=0)  // condição  == verdadeiro
	{
		printf("Digite um valor: ");
		scanf("%d",&valor);
		
		if(valor%3==0&&valor!=0)
		{
			acum=acum+valor;
			cont++;
		}
	}
	
	media=acum/cont;
	printf("\n\nA soma dos valores é igual a: %.1f. \n",acum);
	printf("A média dos valores é igual a: %.2f. ",media);
}

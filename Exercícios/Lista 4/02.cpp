/* 2 - Escrever um programa que receba v�rios n�meros inteiros no teclado. E no 
final imprimir a m�dia dos n�meros m�ltiplos de 3. Para sair digitar 0 (zero).*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL,"Portuguese");

int valor=1,cont=0;
float media,acum=0;
	
    printf("Digite valores inteiros para saber m�dia dos n�meros m�ltiplos de 3 entre eles. \n*Para finalizar digite 0*.\n\n");
	    
	while(valor!=0)  // condi��o  == verdadeiro
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
	printf("\n\nA soma dos valores � igual a: %.1f. \n",acum);
	printf("A m�dia dos valores � igual a: %.2f. ",media);
}

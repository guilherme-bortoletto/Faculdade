//5 - Escreva um programa que apresenta os n�meros divisores de um n�mero.
#include<stdio.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");

	int valor,i,mod;
	
	printf("Digite o n�mero ao qual deseja saber seus divisores: ");
	scanf("%d",&valor);
	
	for(i=1 ; i<=valor ; i++)
	{
		mod=valor%i;
		if(mod==0)
		{
			printf("\n%d",i);
		}
	}
}

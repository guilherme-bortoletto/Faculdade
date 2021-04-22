//4 - Escreva um programa que apresenta o Fatorial de um número.
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");
	
	int i, fat, calfat;
	
	printf("Digite o fatorial a ser cálculado: ");
	scanf("%d",&fat);
	
	//for(inicio;fim(condicao);passo)
	for(i=fat ; i>=1 ; i--)    // i = i+1;    i+=10
	{
		calfat=calfat*i;
	}
    printf("Fatorial igual a: %d",calfat);
}

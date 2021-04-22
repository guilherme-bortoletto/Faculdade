//2 - Faça um programa que calcule a soma dos primeiros 50 números pares
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL, "Portuguese");
	int i, acum=0;

	//for(inicio;fim(condicao);passo)
	for(i=0 ; i<=100 ; i+=2)    // i = i+1;    i+=10
	{
		acum=acum+i;	
	}
	printf("A soma dos primeiros 50 números pares é igual a: %d",acum);
}

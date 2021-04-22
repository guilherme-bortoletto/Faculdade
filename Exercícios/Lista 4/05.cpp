/*5 - Faça um programa que leia vários inteiros positivos e mostre, no final, a soma 
dos números pares e a soma dos números ímpares. O programa para quando 
entrar um número maior que 1000.*/
#include<stdio.h>
#include<locale.h>
main()
{
setlocale(LC_ALL,"Portuguese");

int valor=0,acum_par=0,acum_impar=0;
    
    printf("Digite valores para soma dos pares e soma dos ímpares. *Para finalizar digite um valor maior que 1001*.\n\n");
	
	while(valor<1001)  
	{
		printf("Digite um valor: ");
		scanf("%d",&valor);
		
		if(valor%2==0&&valor>0&&valor<1001)
		{
			acum_par=acum_par+valor;
		}
		else if(valor%2!=0&&valor>0&&valor<1001)
		{
			acum_impar=acum_impar+valor;
		}
	}
	
	printf("\n\nA soma dos pares é igual a: %d",acum_par);
	printf("\nA soma dos impares é igual a: %d",acum_impar);
}


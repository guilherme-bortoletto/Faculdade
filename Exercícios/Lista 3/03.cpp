/*3 - Escreva um programa em C que l� 15 valores reais, encontra o maior e o 
menor deles e mostra o resultado*/

#include<stdio.h>
#include<locale.h>
main()

{
	setlocale(LC_ALL,"Portuguese");
    int i, numero, maior, menor;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    maior= numero;
    menor= numero;

    for(i=1;i<15;i++)
    {
        printf("\nDigite um n�mero:");
        scanf("%d", &numero);

        if(numero>maior)
        {
            maior=numero;
        }

        else if (numero<menor)
        {
            menor=numero;
        }
    }
        printf("\n\nO numero maior �:%d \n ", maior);
        printf("O numero menor �:%d \n ", menor);
}

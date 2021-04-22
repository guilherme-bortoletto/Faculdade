/*6 - Criar um algoritmo que leia os limites inferior e superior de um intervalo e imprima 
todos os números pares no intervalo aberto e seu somatório. Suponha que os dados 
digitados são para um intervalo crescente, ou seja, o primeiro valor é menor que o 
segundo.*/
#include<stdio.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");

    int limite_inferior, limite_superior, i, acum=0;
    
        printf("Digite um limite inferior para um intervalo: ");
        scanf("%d",&limite_inferior);
       
        printf("\nDigite um limite superior para um intervalo: ");
        scanf("%d",&limite_superior);
       
        for(i=limite_inferior;i<=limite_superior;i++)
        {
        	if(i%2==0)
        	{
        	printf("\n%d",i);
			acum=acum+i; 
			}	
       	}
       	
       	printf("\n\nA soma dos números é igual a: %d",acum);
}

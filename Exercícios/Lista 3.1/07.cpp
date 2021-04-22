/*7 - Criar um algoritmo que leia um número (NUM) e então imprima os múltiplos de 3 e 
5, ao mesmo tempo, no intervalo fechado de 1 a NUM.*/
#include<stdio.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");

    int limite, i,tabuada_3, tabuada_5;
    
        printf("Digite um limite para a tabuada de 3 e 5: ");
        scanf("%d",&limite);

        for(i=1;i<=limite;i++)
        {
        	tabuada_3=3*i;
        	tabuada_5=5*i;
            printf("\n3 x %d = %d      |      5 x %d = %d ",i,tabuada_3,i,tabuada_5);
       	}
}

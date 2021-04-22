//6 - Faça um programa em C para exibir a tabuada de 0 a 9.
#include<stdio.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");

	int i1,i2,tab;
	
	for(i1=0 ; i1<=9 ; i1++)
	{
		for(i2=0 ; i2<=10 ; i2++)
		{
			tab=i1*i2;
			printf("\n%d x %d = %d",i1,i2,tab);
		}
	}
}



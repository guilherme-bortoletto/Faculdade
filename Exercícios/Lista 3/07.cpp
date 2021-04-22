/*7 - Faça um programa que receba a idade e o peso de 7 pessoas, calcule e 
mostre:
• A quantidade de pessoas com mais de 90 quilos;
• A média das idades das 7 pessoas.
• A quantidade de pessoas maiores de idade e abaixo de 60 quilos.
• A porcentagem de pessoas com idade entre 10 e 30 anos.*/
#include<stdio.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
    int i, idade, cont_90=0, acum_idade=0 , cont_60, cont_between=0;
    float peso,media,prct;
	
	for (i=1; i<=7; i++)
	{
		printf("\nDigite a idade da pessoa %d: ",i);
		scanf("%d",&idade);		
		
		printf("Digite o peso da pessoa %d: ",i);
		scanf("%f",&peso);	
		
		acum_idade=acum_idade+idade;
		if(peso>90)
		{
			cont_90++;
		}
		else if(idade>18&&peso<60)
		{
			cont_60++;
		}
		else if(idade<30&&idade>10)
		{
			cont_between++;
		}
	}
	media=acum_idade/7;
	prct=cont_between*100/7;
	printf("\n\nA quantidade de pessoas com mais de 90 quilos: %d.",cont_90);
	printf("\nA média das idades das 7 pessoas: %.1f.",media);
	printf("\nA quantidade de pessoas maiores de idade e abaixo de 60 quilos: %d.",cont_60);
	printf("\nA porcentagem de pessoas com idade entre 10 e 30 anos: %.1f porcento.",prct);
}

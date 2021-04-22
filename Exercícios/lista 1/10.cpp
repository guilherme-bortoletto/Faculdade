/*10 - Cálculo de um salário líquido de um professor. Serão fornecidos valor da hora aula,
número de aulas dadas e o % de desconto do INSS.*/
#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float hr_aula,salario,salario_liq;
	int num_aula,desc;
	
	   printf(">>>>Cálculo de um salário líquido de um professor<<<<");
	   
	   printf("\n\n\nDigite o valor da hora aula: ");
       scanf("%f",&hr_aula);
       
       printf("\nDigite o número de aulas dadas: ");
       scanf("%d",&num_aula);
       
       salario=hr_aula*num_aula;
       
       printf("\nDigite a porcentagem de desconto do INSS: ");
       scanf("%d",&desc);
       
       salario_liq=salario-(salario*desc/100);  
       printf("\n\nO salário líquido é igual a: R$%.2f.",salario_liq);	              
}

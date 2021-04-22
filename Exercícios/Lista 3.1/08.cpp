/*8 - Escreva um algoritmo, que leia um conjunto de 10 fichas, cada uma contendo, a altura 
e o código do sexo de uma pessoa (código = 1 se for masculino e 2 se for feminino), e 
calcule e imprima:
- a maior e a menor altura da turma;
- a média de altura das mulheres;
- a média de altura da turma.*/
#include<stdio.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");

    int i,sexo,cont_fem=0;
    float altura,acum_altura=0,maior=0,menor=0,acum_fem=0,media_fem;
    
        for(i=1; i<=3; i++)
        {
        	printf("\nDigite sua altura (em metros): ");
        	scanf("%f",&altura);
        	acum_altura=acum_altura+altura;
        	if(i==1)
        	{
        		maior=altura;
        		menor=altura;
			}
			if(altura>maior)
			{
				maior=altura;
			}
			else if(altura<menor)
			{
				menor=altura;
			}
        
        	printf("Digite seu sexo, sendo 1 para masculino e 2 para feminino: ");
        	scanf("%d",&sexo);
			if(sexo==2)
			{
				acum_fem=acum_fem+altura;
			    cont_fem++;
			}
        }
        
        media_fem=acum_fem/cont_fem;
        printf("\n\nA maior altura é: %.2f.",maior);
        printf("\nA menor altura é: %.2f",menor);
        printf("\nA média de altura das mulheres é: %.2f",media_fem);
        printf("\nA a média de altura da turma é: %.2f",acum_altura/3);
}
        	
        	
        

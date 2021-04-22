/*11 - Calcule e imprima o valor em reais de cada kw, o valor em reais a ser pago e o novo valor 
a ser pago por essa residência com um desconto de 10%. 
Dado: 100 kilowatts custa 1/7 do salário-mínimo.*/
#include<stdio.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
	
float consumo,cada_kw,valor_inicial,valor_desc;
		
    printf("Informe o consumo em kilowatts: ");
    scanf("%f",consumo);
    
    cada_kw=1100.0/7.0/100.0;
    printf("\n\nValor de cada kilowatt: %.2f",cada_kw);
    
    valor_inicial=cada_kw*consumo;
    printf("\n\nValor a ser pago: %.2f",valor_inicial);
    
    valor_desc=valor_inicial*0,9;
    printf("\n\nValor a ser pago com desconto: %.2f",valor_desc);
}


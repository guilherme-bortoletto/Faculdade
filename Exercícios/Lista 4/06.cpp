/*6 - Faça um programa que dada uma quantia de dinheiro em libras inglesas 
imprime o equivalente em dólares canadenses. A relação é £1,0 = $1,84. Depois 
disso, pergunte se o usuário quer ou não transformar mais algum valor; se não 
quiser, encerre.*/
#include<stdio.h>
#include<locale.h>
main()
{
    setlocale(LC_ALL,"Portuguese");
    char continuar;
    float libras,cambio;
    
    while(continuar=='s')  // condição  == verdadeiro
	{
		printf("Digite o valor em libras inglesas: ");
		scanf("%f",&libras);
		
		cambio=libras*1,84;
		printf("\nValor com o câmbio para dólar: %.2f",cambio);
		
		printf("\nDeseja realizar o cambio novamente?");
		scanf("%c",&continuar);
	}
}
	



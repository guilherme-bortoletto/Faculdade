/*6 - Fa�a um programa que dada uma quantia de dinheiro em libras inglesas 
imprime o equivalente em d�lares canadenses. A rela��o � �1,0 = $1,84. Depois 
disso, pergunte se o usu�rio quer ou n�o transformar mais algum valor; se n�o 
quiser, encerre.*/
#include<stdio.h>
#include<locale.h>
main()
{
    setlocale(LC_ALL,"Portuguese");
    char continuar;
    float libras,cambio;
    
    while(continuar=='s')  // condi��o  == verdadeiro
	{
		printf("Digite o valor em libras inglesas: ");
		scanf("%f",&libras);
		
		cambio=libras*1,84;
		printf("\nValor com o c�mbio para d�lar: %.2f",cambio);
		
		printf("\nDeseja realizar o cambio novamente?");
		scanf("%c",&continuar);
	}
}
	



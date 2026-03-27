#include <stdio.h>
#include <stdlib.h>

int main(){
	
		// calculo de despesas de viagem
	float distancia;
	float preco; 
	float gasto_total;
	
	printf("Ola!\n");
	
	while (1) {  // laco infinito ate os valores serem validos
	
	printf("Qual a distancia da sua viagem em km?\n");
	scanf("%f", &distancia);
	
	printf("Qual o preco do litro do combustivel?\n");
	scanf("%f", &preco);
	
	if (distancia <= 0 || preco <= 0) {
		
        printf("Valores invalidos. Digite numeros maiores que zero.\n");
    } else 	{
    	
		// Calculo de processamento - Considerando que o carro faz 10 km por litro:
	gasto_total = (distancia/10) * preco;
	
	printf("O valor total estimado com combustivel sera: R$ %.2f\n", gasto_total);
	
	break; // sai do while quando estiver tudo certo
        }
}
	system("pause");
	return 0;
}


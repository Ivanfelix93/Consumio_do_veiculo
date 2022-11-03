#include<stdio.h>
#include<stdlib.h>

int main(void)

{
	float tempo, velocidade, distancia, consumo;
	printf(" Digite o tempo de viagem em horas: ");
	scanf("%f", &tempo);
	printf(" Digite a velocidade media em km: ");
	scanf("%f", &velocidade);
	
	distancia= tempo*velocidade;
	consumo= distancia/12;
	
	printf("A distancia percorrida foi de %2.f quilometros e o consumo foi de %2.f litros de combustivel.", distancia, consumo);
	
system("pause");

return 0;
	
	
}
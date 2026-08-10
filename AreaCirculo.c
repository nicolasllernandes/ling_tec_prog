#include <stdio.h>
#include <stdlib.h>



int main() {
	float raio, area;
	printf("Insira o raio de um circulo \n");
	scanf("%f", &raio);
	area = 3.141592 * (raio * raio);
	printf("A area do circulo de raio %0.2f eh %0.2f", raio, area);
	return 0;
}

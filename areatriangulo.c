#include <stdio.h>
#include <stdlib.h>



int main() {
	float base, altura, area;
	printf("Insira um valor para a base do triangulo \n");
	scanf("%f", &base);
	printf("Insira um valor para a altura do triangulo \n");
	scanf("%f", &altura);
	area = base * altura / 2;
	printf("A area do triangulo eh %0.2f \n", area);
	
	return 0;
}

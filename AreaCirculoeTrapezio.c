#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	float raio, area;
	printf("Insira o raio de um circulo:\n");
	scanf("%f", &raio);
	area = M_PI * (raio * raio);
	printf("A area do circulo de raio %0.2f eh %0.2f\n", raio, area);
	float B, b, h;
	printf("Insira uma base B:\n");
	scanf("%f", &B);
	printf("Insira uma base b:\n");
	scanf("%f", &b);
	printf("Insira uma altura h:\n");
	scanf("%f", &h);
	float area2;
	area2 = (B+b)*h / 2;
	printf("A area do trapezio de base maior %0.2f, base menor %0.2f e altura %0.2f eh %0.2f", B, b, h, area2);
	return 0;

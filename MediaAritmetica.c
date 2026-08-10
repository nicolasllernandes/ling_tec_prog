#include <stdio.h>
#include <stdlib.h>



int main() {
	float valor_1, valor_2, valor_3;
	printf("Insira um valor \n");
	scanf("%f", &valor_1);
	printf("Insira um segundo valor \n");
	scanf("%f", &valor_2);
	printf("Insira um terceiro valor \n");
	scanf("%f", &valor_3);
	float media = (valor_1 + valor_2 + valor_3) / 3;
	printf("a media aritmetica entre %f, %f e %f eh %0.2f", valor_1, valor_2, valor_3, media);
	return 0;
}

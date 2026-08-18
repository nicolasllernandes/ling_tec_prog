#include <stdio.h>
#include <stdlib.h>



int main() {

	int a, b, c, maiorTemp, maior;
	printf("Insira três valores para identificar o maior: ");
	scanf("%d %d %d", &a, &b, &c);

	maiorTemp = ((a+b+abs(a-b)) / 2);
	maior = ((maiorTemp+c+abs(maiorTemp-c))/2);
	printf("%d", maior);















	return 0;
}

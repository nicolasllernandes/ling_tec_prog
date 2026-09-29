#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a, b, c, aux;
	
	printf("Insira tres valores: ");
	scanf("%d, %d, %d", &a, &b, &c);
	if (a != b && b != c && a & c){
		if (a>c){
			aux = c;
			c = a;
			a = aux;
		}
		if (a>b){
			aux = b;
			b = a;
			a = aux;
		}
		if (b>c){
			aux = c;
			c = b;
			b = aux;
		}
		printf("Os números em ordem crescente: %d %d %d", a, b, c);
	
	} else{
		printf("Os números precisam ser distintos!");
	}
	return 0;
}

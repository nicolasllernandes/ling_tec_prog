#include <stdio.h>
#include <stdlib.h>


int main() {
	int qtd_tot, max_mochila, qtd_mochila, resto;
	
	printf("Insira a quantidade de itens e a capacidade da mochila: ");
	scanf ("%d %d", &qtd_tot, &max_mochila);
	qtd_mochila = qtd_tot / max_mochila;
	resto = qtd_tot%max_mochila;
	printf("Sao %d mochilas cheias e o resto eh %d", qtd_mochila, resto);
	return 0;
}

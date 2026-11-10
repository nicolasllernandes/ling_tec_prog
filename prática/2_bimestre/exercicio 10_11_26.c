#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int notas[10];
	int i;
	for(i=1; i<11; i++){
		printf("Escreva a nota do aluno %d:\n", i) ;
		scanf("%d", &notas[i]);
	}
	printf("De qual aluno deseja ver a nota? (1-10)");
	scanf("%d", &i);
	printf("%d", notas[i]);
	return 0;
}
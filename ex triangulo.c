#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float base, altura, area; //declaração de variáveis
	
	base = 10; //base do triângulo
	altura = 18; //altura do triângulo
	area = base * altura / 2; //área do triângulo
	
	printf("A area do triangulo de base %f e altura %f eh %f", base, altura, area); //imprimindo a mensagem na tela
	
	return 0; //depois de executar o programa, retornar 0

		/*DICA: ctrl + espaço para usar o auto complete!*/
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int exercicio, grandeza, um, dois, tres, quatro, cinco, seis, sete, oito, nove, dez, onze, digito_um, digito_dois;
	float temperatura, calculo_celsius, calculo_fahrenheit;
	
	printf("Escolha um exercício (1-3)");
	scanf("%d", &exercicio);
	switch (exercicio){
	case 1:
	printf("Informe seu CPF (digite cada numero separado por espacos)");
	scanf("%d %d %d %d %d %d %d %d %d %d %d", &um, &dois, &tres, &quatro, &cinco, &seis, &sete, &oito, &nove, &dez, &onze);
	
	digito_um = ((um * 10 + dois * 9 + tres * 8 + quatro * 7 + cinco * 6 + seis * 5 + sete * 4 + oito * 3 + nove * 2) * 10 ) % 11;
	digito_dois = ((um * 11 + dois * 10 + tres * 9 + quatro * 8 + cinco * 7 + seis * 6 + sete * 5 + oito * 4 + nove * 3 + dez * 2) * 10) % 11;
	
	if (digito_um == dez && digito_dois == onze){
		printf("CPF válido!");
	}
	else{
		printf("CPF inválido!");
	}
	break;
	
	case 2:
	printf("Escreva uma temperatura:");
	scanf("%f", &temperatura);
	calculo_celsius = temperatura * 9/5 + 32;
	calculo_fahrenheit = (temperatura - 32) * 5/9;
	printf("Selecione uma grandeza. (Escreva 1 para Celsius e 2 para Fahrenheit)");
	scanf("%d", &grandeza);
		if (grandeza == 1){
			printf("%f", calculo_celsius);
		}
		else if (grandeza == 2) {
		printf("%f", calculo_fahrenheit);
		}
	break;
	}
		return 0;
	}


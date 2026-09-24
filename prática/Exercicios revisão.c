#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int exercicio, grandeza, um, dois, tres, quatro, cinco, seis, sete, oito, nove, dez, onze, digito_um, digito_dois;
	float temperatura, calculo_celsius, calculo_fahrenheit;
	int nota1, nota2, nota3, media, faltam;
	printf("Escolha um exercicio (1-3)");
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
	
	case 3:
	printf("Insira a primeira nota: ");
	scanf("%d", &nota1);
	printf("Insira a segunda nota: ");
	scanf("%d", &nota2);
	printf("Insira a terceira nota: ");
	scanf("%d", &nota3);
	media = (nota1 + nota2 + nota3)/3;
	printf("Media: %d\n", media);
	printf ("Situacao final: ");
	faltam = 100 - media;
	if (media >= 70 && media <=100){
		printf("Aprovado!");
	}
	else if (media >= 40 && media <= 69){
		printf("Exame! Faltam %d pontos para atingir um 100", faltam);
	}
	else if (media <= 39){
		printf("Reprovado!");
	}
	}
		return 0;
	}


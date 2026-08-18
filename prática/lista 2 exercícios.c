#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	//Ex 1
	int ano_nascimento, idade, ano_atual;
	char resposta[10];
	char resp1[10] = "sim";
	char resp2[10] = "nao";
	
	printf("Quantos anos voce tem?\n");
	scanf("%d", &idade);
	
	printf("Em que ano estamos?\n");
	scanf("%d", &ano_atual);
	
	printf("Voce ja fez aniversario? escreva sim ou nao\n");
	scanf("%s", resposta);
	
	if (strcmp(resposta, resp1) == 0) {
	
	ano_nascimento = ano_atual - idade;
	printf("Voce nasceu em %d", ano_nascimento);
	
	}
	
	else if (strcmp(resposta,resp2) == 0) {
		ano_nascimento = ano_atual - idade - 1;
		printf("Voce nasceu em %d", ano_nascimento);
		
			
	}

	//Ex 2
	float quilometro, metro;
	printf("Insira uma velocidade em Km/h: \n");
	scanf("%f", &quilometro);
	
	metro = quilometro / 3.6;
	
	printf("A velocidade em m/s eh %0.2f", metro);


	//Ex 3
	float dolar, real;
	
	printf("Qual a cotacao atual do dolar?\n");
	scanf("%f", &dolar);
	
	printf("Insira seu valor em reais:\n");
	scanf("%f", &real);
	
	printf("Seu valor convertido eh %0.2f dolares", real/dolar);

	//Ex 4
	float celsius, fahrenheit;
	
	printf("Insira uma temperatura em Celsius: \n");
	scanf("%f", &celsius);
	
	fahrenheit = (celsius * (9.0/5.0) + 32);
	
	printf ("Sua temperatura eh %0.2f fahrenheit", fahrenheit);
	
	//Ex 5	
	float R, G, p;
	p = 3.141592;
	printf("Insira um angulo em graus:\n");
	scanf("%f", &G);
	R = G * p / 180;
	printf("%0.2f graus = %0.2f radianos", G, R);

   //Ex 6
	int num;
	printf("Insira um numero inteiro:\n");
	scanf("%d",&num);
	printf("Numero: %d Antecessor: %d Sucessor: %d", num, num-1, num+1);

	//Ex 7
	float Valor;
	Valor = 780000;
	printf("Primeiro Ganhador: %0.2f reais \nSegundo Ganhador: %0.2f reais \nTerceiro Ganhador: %0.2f reais", Valor*0.46, Valor*0.32, Valor*0.22);
	
	
	//Ex 8
	int tempo, horas, minutos, segundos;
	
	printf("Insira o tempo de duração em segundos do evento:");
	scanf("%d", &tempo);
	
	horas = tempo / 3600;
	minutos = (tempo % 3600) / 60;
	segundos = (tempo % 3600) % 60; 
	
	printf("%d:%d:%d", horas, minutos, segundos);
	
	//EX 9
	float tempo_horas, velocidade_media, distancia_percorrida, litros_necessarios;
	
	printf("Insira o tempo gasto na viagem (em horas):\n");
	scanf("%f", &tempo_horas);
	
	printf("Insira a velocidade media (em km/h):\n");
	scanf("%f", &velocidade_media);
	
	distancia_percorrida = tempo_horas * velocidade_media;
	litros_necessarios = distancia_percorrida / 12;
	printf("%0.3f litros foram necessarios para a viagem de Joaozinho", litros_necessarios);
	
	
	//Ex 10
	int a, b, c, maiorTemp, maior;
	printf("Insira tres valores para identificar o maior: ");
	scanf("%d %d %d", &a, &b, &c);

	maiorTemp = ((a+b+abs(a-b)) / 2);
	maior = ((maiorTemp+c+abs(maiorTemp-c))/2);
	printf("%d eh o maior", maior);
	
	return 0;
	
}

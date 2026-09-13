#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int exercicio;
	int idade, ano_atual, aniversario;
	float quilometro, metro;
	float dolar, real;
	float celsius, fahrenheit;
	float R, G, p;
	int num;
	float Valor;
	int tempo, horas, minutos, segundos;
	float tempo_horas, velocidade_media, distancia_percorrida, litros_necessarios;
	int a, b, c, maiorTemp, maior;
	
	printf("Selecione qual exercicio voce deseja rodar: (1-10)");
	scanf("%d", &exercicio);
	
	switch (exercicio) {
	
	case 1:
		printf("Digite sua idade: ");
    	scanf("%d", &idade);

    	printf("Digite o ano atual: ");
    	scanf("%d", &ano_atual);

    	printf("Ja fez aniversario? (1 = sim / 0 = nao): ");
    	scanf("%d", &aniversario);

    	if (aniversario == 1){
			printf("Voce nasceu em %d\n", ano_atual - idade);
    		}
		else if (aniversario == 0) {
		
        	printf("Voce nasceu em %d\n", ano_atual - idade - 1);
			}
		break;
		
	case 2:
		printf("Insira uma velocidade em Km/h: \n");
		scanf("%f", &quilometro);
	
		metro = quilometro / 3.6;
	
		printf("A velocidade em m/s eh %0.2f", metro);
		break;
		
	case 3:
		printf("Qual a cotacao atual do dolar?\n");
		scanf("%f", &dolar);
	
		printf("Insira seu valor em reais:\n");
		scanf("%f", &real);
	
		printf("Seu valor convertido eh %0.2f dolares", real/dolar);
		break;
	
	case 4:
		printf("Insira uma temperatura em Celsius: \n");
		scanf("%f", &celsius);
	
		fahrenheit = (celsius * (9.0/5.0) + 32);
	
		printf ("Sua temperatura eh %0.2f fahrenheit", fahrenheit);
		break;
		
	case 5:
		p = 3.141592;
		printf("Insira um angulo em graus:\n");
		scanf("%f", &G);
		R = G * p / 180;
		printf("%0.2f graus = %0.2f radianos", G, R);
		break;
	
	case 6:
		printf("Insira um numero inteiro:\n");
		scanf("%d",&num);
		printf("Numero: %d Antecessor: %d Sucessor: %d", num, num-1, num+1);
		break;
	
	case 7:
		Valor = 780000;
		printf("Primeiro Ganhador: %0.2f reais \nSegundo Ganhador: %0.2f reais \nTerceiro Ganhador: %0.2f reais", Valor*0.46, Valor*0.32, Valor*0.22);
		break;
	
	
	case 8:
		printf("Insira o tempo de duracao em segundos do evento:");
		scanf("%d", &tempo);
	
		horas = tempo / 3600;
		minutos = (tempo % 3600) / 60;
		segundos = (tempo % 3600) % 60; 
	
		printf("%d:%d:%d", horas, minutos, segundos);
		break;
	
	case 9:
		printf("Insira o tempo gasto na viagem (em horas):\n");
		scanf("%f", &tempo_horas);
	
		printf("Insira a velocidade media (em km/h):\n");
		scanf("%f", &velocidade_media);
	
		distancia_percorrida = tempo_horas * velocidade_media;
		litros_necessarios = distancia_percorrida / 12;
		printf("%0.3f litros foram necessarios para a viagem de Joaozinho", litros_necessarios);
		break;
		
	case 10:
		printf("Insira tres valores para identificar o maior: ");
		scanf("%d %d %d", &a, &b, &c);

		maiorTemp = ((a+b+abs(a-b)) / 2);
		maior = ((maiorTemp+c+abs(maiorTemp-c))/2);
		printf("%d eh o maior", maior);
		break;
	}
	
	return 0;
}

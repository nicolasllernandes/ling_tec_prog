#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	char letra;
	printf("Insira uma letra");
	scanf("%c", &letra);
	
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		if (letra == 'a'||letra == 'o'){
		printf("aoba");	
		}
		if (letra == 'i' || letra == 'u'){
			printf("LA ELE");
		}
	
	
	}
	else {
		printf("67");

}

	switch (letra) {
	
		case 'a':
			printf("A de Amor");
			break;
		case 'b':
			printf("B de Baixinho");
			break;
		case 'c':
			printf("C de Coracao");
			break;
		case 'd':
			printf("D de Docinho");
			break;
	
	
	
	}

	return 0;
}



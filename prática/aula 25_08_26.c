#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	int a, b, r;

	printf("Insira os valores do problema: ");
	scanf ("%d %d", &a, &b);


	if (a>0 && b>0){
		if (a%2==0 && b%2==0){
			printf("Sao multiplos de 2 \n");
			}
		if (a>b){
			
			if (a%b == 0){
			printf("Sao multiplos entre si");
				}
			}
	
			
			else {
				if (b%a == 0){
				
				printf("Sao multiplos entre si");
		}
			}
		
		}
		
		
	return 0;
}

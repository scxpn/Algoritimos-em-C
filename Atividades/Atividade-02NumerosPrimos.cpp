#include<stdio.h>

main(){
	printf("Esses sao os numeros primos:\n ");
	int numberP;
	
	while(numberP < 100){
		numberP = numberP + 1;
		if (numberP % 1 == 1){
			printf("\n%d", numberP);
		}		
	}
}


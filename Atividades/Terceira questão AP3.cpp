#include<stdio.h>

main(){
	//Apresentação do código
	printf("Sequencia de Fibonacci: ");
	
	int penultimo, ultimo, auxiliar;
	printf("\nDigite o ultimo numero da sequencia: ");
	scanf("%d", &ultimo);
	printf("\nDigite o penultimo numero da sequencia: ");
	scanf("%d", &penultimo);
	
	printf("\n%d", ultimo);
	printf("\n%d\n", penultimo);

	while(penultimo > 0) {
		auxiliar = ultimo - penultimo;
		ultimo = penultimo;
		penultimo = auxiliar;
		printf("%d\n", penultimo);
	}
}

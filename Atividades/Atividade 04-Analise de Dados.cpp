#include<stdio.h>
#include<locale.h>//Biblioteca que disponibiliza o sistema UTF-8

main(){
	setlocale(LC_ALL,"");//Ativação da biblioteca locale.h
	
	printf("---Digite um número e descubra se é IMPAR ou PAR---\n");
	printf("\nREGRA:\nVocê pode ver 5 números de cada vez.\n");
	
	//Declaração do array
	int numbers[5];
	
	//
	for(int i=1; i<=5; i++){
		printf("\n==================================");
		printf("\nDigite o %dº número: ", i);
		scanf("%d", &numbers[i]);
		
		if(numbers[i] % 2 == 0){
			printf("O número %d é par.", numbers[i]);
		}
		
		else{
			printf("O número %d é impar.", numbers[i]);
		}
	}
	
}

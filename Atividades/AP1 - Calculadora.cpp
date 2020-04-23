#include<stdio.h>
#include<locale.h>
#include <math.h>

main(){
	//Apresentação
	setlocale (LC_ALL, "");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Calculadora de Função do Segundo Grau:\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	
	//Repetição Infinita
	while(true){
	
		//Menu
		int menu;
		printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf("\nEscolha uma das opções abaixo:\n1) Bhaskara\n0) Sair\nDigite a opção desejada:");
		scanf("%d", &menu);
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	
		//Acesso às opções
		if(menu == 1){
			//Declaração de Variáveis
			int a,b,c;
			
			//Coleta de dados de :
			
			//A
			printf("\nInforme o valor de A: ");
			scanf("\n%d", &a);
			
			//B
			printf("\nInforme o valor de B: ");
			scanf("\n%d", &b);
			
			//C
			printf("\nInforme o valor de C: ");
			scanf("\n%d", &c);
			
			//Calculo
			int delta, x1, x2;
			
			delta = (b*b) - (4*a*c);
			
			//Verificação do Delta
			if(delta < 0){//Se negativo
				printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
				printf("\nO delta nunca pode ser negativo.\nSeu delta é %d\n", delta);
				
			}
		
			else{//Se positivo
			
				//Calculo de ambos os X
				x1 = (-b +(sqrt(delta))) / (2*a);
				x2 = (-b -(sqrt(delta))) / (2*a);
				
				//Resposta
				printf("\nDelta = %d\n",delta);
				printf("X1 = %d\n", x1);
				printf("X2 = %d\n", x2);
				}
		
			}
			
		if(menu == 0){
				return 0;
		}
			
		else{
			printf("\nOPÇÃO INVALIDA");
		}
	}
}

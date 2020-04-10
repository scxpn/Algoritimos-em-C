#include<stdio.h>

main(){
	//Variaveis
	char pessoa1[5], pessoa2[5];
	int idade1, idade2;
	
	//Dados da primeria pessoa
	printf("Informe o nome da primeira pessoa: ");
	scanf("%s", &pessoa1);
	printf("Idade de %s: ", pessoa1);
	scanf("%d", &idade1);
	
	//Dados da segunda pessoa
	printf("Informe o nome da segunda pessoa: ");
	scanf("%s", &pessoa2);
	printf("Idade de %s: ", pessoa2);
	scanf("%d", &idade2);
	
	//Calculo
	if(idade1 != idade2){
	
		if(idade1 > idade2){
			printf("\n%s eh o mais velho e %s eh o mais novo", pessoa1, pessoa2);
		
		}
		else{
			printf("\n%s eh o mais velho e %s eh o mais novo", pessoa2, pessoa1);
		}
	}
	else{
		printf("\n%s e %s tem a mesma idade.", pessoa1, pessoa2);
	}
}

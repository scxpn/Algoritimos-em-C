#include<stdio.h>

main(){
	//Apresentação do código
	printf("Sequencia de Fibonacci: ");
	
	//Declaração de variáveis
	int n1, n2 = 1, n3;
	
	//Print de variaveis iniciais
	printf("\n%d\t%d", n1, n2);
	
	//Estrutura de repetição
	for(int i = 3; i <= 10;){
		//Estrutura de calculo
		n3 = n1+n2;
		n1 = n2;
		n2 = n3;
		i++;
		
		//Mosta as respostas obtidas do calculo
		printf("\t%d", n3);
	}
}


#include<stdio.h>
//Código baseado no Evellyne Anunciada

main(){
	//Apresentação da função do código
    printf("Esses sao os numeros primos entre 1 e 100: ");
    
    //Declaração das variaveis
    int counter, c, b= 2, a = 2;
    
    //Looping principal da execução
    while( a < 100){
    	
    	while(b < a){
    		if(a % b == 0){
    			c = 1;
    			
			}
    		b++;
		}
		
		b = 2;
		
		if(c == 0){
			printf("\n%d", a);
			counter++;
		}
		c =0;
		a++;
		
	}
}


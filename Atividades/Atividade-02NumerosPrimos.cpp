#include<stdio.h>
//Código baseado no Evellyne Anunciada

int main(){
	
	//Declaração de Variaveis
	int a=2,b=2,c=0;
	
	//Apresentação da função do código
    printf("Esses sao os numeros primos entre 1 e 100: ");
    
    //Contador até o 100
	while(a<=100){
		//Verificação de numeros
		while(b<a){
			if(a%b==0){
				
				c++;
				break;
			}
		b++;
		}
		
		b=2;
		
		if(c==0){
		printf("\n %d",a);
		
		}
		c=0;
		a++;
	
	}		
}



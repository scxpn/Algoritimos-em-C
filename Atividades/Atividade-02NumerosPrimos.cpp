#include<stdio.h>

main(){
    printf("A seguir os nuneros primos entre 1 e 100");
    int primos;
    primos=1;
     printf("2\n3\n5\n7");
      while(primos<100){
     primos=primos+1;
     if(primos %2 != 0 && primos %3 != 0 && primos %5 != 0 && primos %7 != 0){
       printf("\n%d",primos);
        }
    }
}


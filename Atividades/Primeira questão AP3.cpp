#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	int n, c;
	setlocale (LC_ALL, "");
	printf("Digite um número: ");
	scanf("%d", &n);
	c = n*n*n;
	printf("\nVocê digitou o número %d e o cubo dele é %d", n, c);
}

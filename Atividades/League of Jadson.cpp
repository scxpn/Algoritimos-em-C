#include <stdio.h>
#include <stdlib.h>

main() {
	// Variavel do mapa (matriz de caracteres)
	char mapa[10][10];
		
	// Preenche o mapa com traços
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			mapa[i][j] = '-';
		}
	}
	
	// Posicao do heroi
	int vertical = 0;
	int horizontal = 4;
	// Insere o heroi no mapa	
	mapa[horizontal][vertical] = 'J';
	
	while(true) {
		// Imprime o mapa
		for(int i = 0; i < 10; i++) {
			for(int j = 0; j < 10; j++) {
				printf("%c", mapa[i][j]);
			}
			printf("\n");
		}
		
		// Insere o comando de andar do heroi (W A S D)
		char comando;
		scanf("%c", &comando);
		
		// Limpa a tela (deleta o mapa anterior)
		system("cls");
		
		// Remove a posicao do heroi
		mapa[horizontal][vertical] = '-';
		
		// Move o heroi
		if(comando == 'w') {
			horizontal--;
		}
		
		if(comando == 's') {
			horizontal++;
		}
		
		if(comando == 'a') {
			vertical--;
		}

		if(comando == 'd') {
			vertical++;
		}
		
		// Atualiza a posicao do heroi
		mapa[horizontal][vertical] = 'J';
		
		
		/*Parede invisivel*/
		
		/*#block vertical*/
		if(vertical > 9){
		vertical--;
		}
		
		if(vertical < 0){
		vertical++;
		}
		
		
		/*#block horizontal*/
		if(horizontal > 9){
		horizontal--;
		}
		
		if(horizontal < 0){
		horizontal++;
		}
		
		mapa[horizontal][vertical] = '-';

	
	}
}

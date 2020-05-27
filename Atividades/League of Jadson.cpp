#include <stdio.h>
#include <stdlib.h>

main() {
	// variavel do mapa (matriz de caracteres)
	char mapa[10][10];
		
	// preenche o mapa com traços
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			mapa[i][j] = '-';
		}
	}
	
	// posicao do heroi
	int vertical = 0;
	int horizontal = 4;
	// insere o heroi no mapa	
	mapa[horizontal][vertical] = 'J';
	
	while(true) {
		// imprime o mapa
		for(int i = 0; i < 10; i++) {
			for(int j = 0; j < 10; j++) {
				printf("%c", mapa[i][j]);
			}
			printf("\n");
		}
		
		// insere o comando de andar do heroi (W A S D)
		char comando;
		scanf("%c", &comando);
		
		// limpa a tela (deleta o mapa anterior)
		system("cls");
		
		// remove a posicao do heroi
		mapa[horizontal][vertical] = '-';
		
		// move o heroi
		if(comando == 'w') {
			horizontal--;
		}
		
		// atualiza a posicao do heroi
		mapa[horizontal][vertical] = 'J';
	}
}

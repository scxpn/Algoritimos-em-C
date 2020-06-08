#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void clearScreen();
void printMap(char mapa[10][10]);
void controlJ(char mapa[10][10], int *h,int *v);
void map(char mapa[10][10], int h,int v);
void coinC(char mapa[10][10], int *h,int *v,int *c,int *a,int *b,int *d,int *f,int *e,int *g,int *k,int *l,int *m,int *n,int *ca);
main() {
     int tru=0;
     int count=0;

	char mapa[10][10];

	// Posicao do heroi
	int y = 0;
	int x = 4;

	// Posicao das moedas
	int m1x = 2,  m1y = 4;
	int m2x = 5,  m2y = 7;
	int m3x = 5,  m3y = 1;
	int m4x = 7,  m4y = 3;
	int m5x = 9,  m5y = 6;

	// Preenche o mapa com tra√ßos
    map(mapa, x, y);
    mapa[x][y] = 'J';
    // Adiciona as moedas
    mapa[m1x][m1y] = 'M';
    mapa[m2x][m2y] = 'M';
    mapa[m3x][m3y] = 'M';
    mapa[m4x][m4y] = 'M';
    mapa[m5x][m5y] = 'M';


	while(tru<1) {
        //Contador
        printf("MOEDAS: %d \n",count);
		printMap(mapa);
		// Move o heroi
		controlJ(mapa,&x,&y);
        clearScreen();
        // Adi√ß√£o de moedas
        coinC(mapa,&x,&y,&count,&m1x,&m1y,&m2x,&m2y,&m3x,&m3y,&m4x,&m4y,&m5x,&m5y,&tru);


	}
     if(tru == 1){
          // Fim de jogo
            system("cls");
			printf("\nTodas moedas foram recolhidas!\nVoce venceu!");
        }
}

// Complementacao de voids

// Verifica pontos
void coinC(char mapa[10][10], int *h,int *v,int *c,int *a,int *b,int *d,int *f,int *e,int *g,int *k,int *l,int *m,int *n,int *ca){
    if(*h == *a  && *v == *b){
            *c= *c+ 1;
            *a= -1;
            *b= -1;
        } else if(*h == *d  && *v == *f){
         *c= *c+ 1;
         *d= -1;
         *f= -1;
        } else if(*h == *e  && *v == *g){
         *c= *c+ 1;
         *e= -1;
         *g= -1;
        } else if(*h == *k  && *v == *l){
         *c= *c+ 1;
         *k= -1;
         *l= -1;
        }else if(*h == *m  && *v == *n){
         *c= *c+ 1;
         *m= -1;
         *n= -1;
        }
        if(*c == 5){
            *ca=1;
        }

}

void map(char mapa[10][10], int h,int v){

    for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			mapa[i][j] = '-';
		}
	}

}

// Move o heroi
void controlJ(char mapa[10][10], int *h,int *v){

        // insere o comando de andar do heroi (W A S D)
		char comando;
		// recebe e atualiza o valor sem aperta enter
		comando = getche();

		// remove a posicao do heroi
		mapa[*h][*v] = '-';

        if(comando == 'w') {
			*h=*h-1;
		}
        if(comando == 's') {
			*h=*h+1;
		}
		if(comando == 'd') {
			*v=*v+1;
		}
		if(comando == 'a') {
			*v=*v-1;
		}

		if(*v  > 9){
            *v= 9;
        }
        if(*v < 0){
           *v= 0;
        }
        if(*h > 9){
           *h= 9;
        }
        if(*h < 0){
           *h= 0;
        }
        //Atualiza a posiÁ„o do player
		mapa[*h][*v] = 'J';

}
// Imprime o mapa
void printMap(char mapa[10][10]){
        for(int i = 0; i < 10; i++) {
			for(int j = 0; j < 10; j++) {
				printf("%c", mapa[i][j]);
			}
			printf("\n");
		}
}
// Limpa a  tela
void clearScreen(){
        system("cls");
}

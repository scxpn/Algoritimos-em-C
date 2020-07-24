#include<stdio.h>
main() {
   char mapa[10][10];
   for(int i=0; i<10; i++) {
      for(int n=0; n<10; n++) {
         mapa[i][n] = '-';
      }
   }

   mapa[0][0]='A';
   mapa[0][9]='A';
   mapa[1][1]='A';
   mapa[1][8]='A';
   mapa[2][2]='A';
   mapa[2][7]='A';
   mapa[3][3]='A';
   mapa[3][6]='A';
   mapa[4][4]='A';
   mapa[4][5]='A';
   mapa[5][5]='A';
   mapa[5][4]='A';
   mapa[6][6]='A';
   mapa[6][3]='A';
   mapa[7][7]='A';
   mapa[7][2]='A';
   mapa[8][8]='A';
   mapa[8][1]='A';
   mapa[9][9]='A';
   mapa[9][0]='A';
// c�digo da resposta
for(int i = 0; i < 10; i++) {
    for(int n = 0; n < 10; n++) {
        printf("%c", mapa[i][n]);
    }
        printf("\n");
    }
}

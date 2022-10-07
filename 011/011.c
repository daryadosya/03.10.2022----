/*!
\authors     Дарья Лебедева <daryadosya@yandex.ru>
\version     0.0.1a
\date        03.10.2022
\coopyright  MIT
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "011.h"

#define SZ 3
void printSz (char a[SZ][SZ]);
void UserStep (char *p);

void s0021 (){
  char a[SZ][SZ] ={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
  printSz (a);
  UserStep (&a[0][0]);
  printSz (a);
}

void printSz (char a[SZ][SZ]){
    for (int i = 0; i<SZ; i++){
      for (int n = 0; n<SZ; n++){
          printf(" %c", a[i][n]);
          if (n+1<SZ) printf ("|");
      }
          if (i+1<SZ) printf("\n---------\n");
   }
}

void UserStep (char *p) {
  int a,b;
  printf("\nСделайте свой ход: укажите индекс ячейки.");
  printf("\nВедите номер строки:");
  scanf ("%d", &a);
  printf("\nВедите номер столбца:");
  scanf ("%d", &b);
  *(p+a*SZ+b) = 'x';
  printf("\n--: %p >> %d \n", p, *(p+a*SZ+b));

}

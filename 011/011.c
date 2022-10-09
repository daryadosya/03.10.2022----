/*!
\authors     Дарья Лебедева <daryadosya@yandex.ru>
\version     o.o.1a
\date        o3.1o.2o22
\coopyright  MIT
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "011.h"

#define SZ 3
void printSz (char a[SZ][SZ]);
void UserStep (char *p, int i);
int check (char a[SZ][SZ]);

void s0021 (){

  struct xo {
    char a[SZ][SZ];// c
    char b;
    bool c;
  };

  struct xo d={{{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}}, " ", false};

  int i, k;
  i = 0;
  k = 0;
  printSz (d.a);
  while (i < 10) {
  k = check (&d.a[0][0]);
  if (k == 1) {
    printf("\nВыиграл пользователь №2!");
    break;
  }
  if (k == 2) {
    printf("\nВыиграл пользователь №1!");
    break;
  }
  if (i < 9){
  UserStep (&d.a[0][0], i);
  printSz (d.a);
  i += 1;
  }
  if ( i == 9) break;
}
  if ((k != 1) && (k != 2))  printf("\nНичья!");
}

void printSz (char a[SZ][SZ]){
    for (int i = 0; i<SZ; i++){
      for (int n = 0; n<SZ; n++){
          printf(" %c", a[i][n]);
          if (n+1<SZ) printf (" |");
      }
          if (i+1<SZ) printf("\n-----------\n");
   }
}

void UserStep (char *p, int i) { // мб указатель где i
  int a,b;
  bool CheckError1, CheckError2;

  if (i % 2 == 0) {
    printf("\nХод пользователя №1 (х): укажите индекс ячейки.");
  }

  if (i % 2 != 0) {
    printf("\nХод пользователя №2 (о): укажите индекс ячейки.");
  }

  printf("\nВведите номер строки:");
  scanf ("%d", &a);
  printf("Введите номер столбца:");
  scanf ("%d", &b);


do {
  if ((a > 2) || (b > 2)) {
    printf("\nError:Индекс вышел за граннцы! Повторите ввод.");
    printf("\nВведите номер строки:");
    scanf ("%d", &a);
    printf("Введите номер столбца:");
    scanf ("%d", &b);
    CheckError2 = false;

    do {
      if ((*(p+a*SZ+b) == 'x') || (*(p+a*SZ+b) == 'o' )) {
        printf("\nError:Ячейка занята! Повторите ввод.");
        printf("\nВведите номер строки:");
        scanf ("%d", &a);
        printf("Введите номер столбца:");
        scanf ("%d", &b);
        CheckError1 = false;
      }
      else CheckError1 = true; // типа все верно
    }
    while (CheckError1 == false);
    
  }
  else CheckError2 = true;
  }
  while (CheckError2 == false);

  if (i % 2 == 0) {
    *(p+a*SZ+b) = 'x';
  }
  if (i % 2 != 0) {
    *(p+a*SZ+b) = 'o';
    }
  //printf("\n--: %p >> %d \n", p, *(p+a*SZ+b));
}

int check (char a[SZ][SZ]){
  if (((a[0][0] == 'o') && (a[0][1] == 'o') && (a[0][2] == 'o')) || \
      ((a[1][0] == 'o') && (a[1][1] == 'o') && (a[1][2] == 'o')) || \
      ((a[2][0] == 'o') && (a[2][1] == 'o') && (a[2][2] == 'o')) || \
      ((a[0][0] == 'o') && (a[1][0] == 'o') && (a[2][0] == 'o')) || \
      ((a[0][1] == 'o') && (a[1][1] == 'o') && (a[2][1] == 'o')) || \
      ((a[0][2] == 'o') && (a[1][2] == 'o') && (a[2][2] == 'o')) || \
      ((a[0][0] == 'o') && (a[1][1] == 'o') && (a[2][2] == 'o')) || \
      ((a[2][0] == 'o') && (a[1][1] == 'o') && (a[0][2] == 'o')))  \
      {
        return 1;
      }
  if (((a[0][0] == 'x') && (a[0][1] == 'x') && (a[0][2] == 'x')) || \
      ((a[1][0] == 'x') && (a[1][1] == 'x') && (a[1][2] == 'x')) || \
      ((a[2][0] == 'x') && (a[2][1] == 'x') && (a[2][2] == 'x')) || \
      ((a[0][0] == 'x') && (a[1][0] == 'x') && (a[2][0] == 'x')) || \
      ((a[0][1] == 'x') && (a[1][1] == 'x') && (a[2][1] == 'x')) || \
      ((a[0][2] == 'x') && (a[1][2] == 'x') && (a[2][2] == 'x')) || \
      ((a[0][0] == 'x') && (a[1][1] == 'x') && (a[2][2] == 'x')) || \
      ((a[2][0] == 'x') && (a[1][1] == 'x') && (a[0][2] == 'x'))) \
      {
      return  2;
    }
      return 3;
}

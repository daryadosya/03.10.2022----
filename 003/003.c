/*!
\authors     Дарья Лебедева <daryadosya@yandex.ru>
\version     0.0.1a
\date        03.10.2022
\coopyright  MIT
*/

/// подключаем стандартную библиотеку
#include <stdio.h>
#include "003.h"

int factorial (int a);
void fact(void);

int start (void) {
  fact();
  return 0;
}

void fact(void){
  int d, res;
  printf("\nВведите переменную d: ");
  scanf ("%d", &d);
  if (d==0){
  res = 1;
  printf("\nФакториал d = %d", res);
  }
  if (d>0){
  res = factorial (d);
  printf("\nФакториал d = %d", res);
  }
  else if (d!=0){
    printf ("\nДанные введены неверно, попробуйте заново.");
    fact();
    }
}

int factorial (int a){
    if (a==1)  {
      return 1;
    }
    else {
      return (a*factorial(a-1));
    }
}

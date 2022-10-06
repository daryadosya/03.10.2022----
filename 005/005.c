/*!
\authors     Дарья Лебедева <daryadosya@yandex.ru>
\version     0.0.1a
\date        03.10.2022
\coopyright  MIT
*/

/// подключаем стандартную библиотеку
#include <stdio.h>
#include "005.h"

int Task1(int S) ;

int start (void) {
  float S;
  printf("\nВведите общее число журавликов S: ");
  scanf ("%f", &S);
  Task1(S);
  return 0;
}

int Task1(int S) {
  int Nk, Np, Ns;

  if ((S % 6)!=0) {
  printf("\nЧисло журавликов должны быть кратно 6! Повторите ввод.");
  return Task1(S);
  }

  Nk = S*2/3;
  Np = S/6;
  Ns = Np;
      printf("\nЧисло журавликов у Кати Nk = %d", Nk);
      printf("\nЧисло журавликов у Пети Np = %d", Np);
      printf("\nЧисло журавликов у Сережи Ns = %d", Ns);
  }

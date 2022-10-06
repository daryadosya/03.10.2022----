/*!
\authors     Дарья Лебедева <daryadosya@yandex.ru>
\version     0.0.1a
\date        03.10.2022
\coopyright  MIT
*/

/// подключаем стандартную библиотеку
#include <stdio.h>
#include "005.h"

void Task1(void) ;

int start (void) {
  Task1();
  return 0;
}

void Task1(void) {
  int Nk, Np, Ns, S;
  printf("\nВведите общее число журавликов S: ");
  scanf ("%d", &S);

  if ((S % 6)!=0) {
  printf("\nЧисло журавликов должны быть кратно 6! Повторите ввод.");
  Task1();
  }
  else {
  Nk = S*2/3;
  Np = S/6;
  Ns = Np;
      printf("\nЧисло журавликов у Кати Nk = %d", Nk);
      printf("\nЧисло журавликов у Пети Np = %d", Np);
      printf("\nЧисло журавликов у Сережи Ns = %d", Ns);
  }
}

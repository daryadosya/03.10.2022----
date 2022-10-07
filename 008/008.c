/*!
\authors     Дарья Лебедева <daryadosya@yandex.ru>
\version     0.0.1a
\date        03.10.2022
\coopyright  MIT
*/

#include <stdio.h>
#include <stdlib.h>
#include "008.h"

void s0021 (){
  int a[10];
  int b[10];
  int c[5] = {6, 4, 3};

  a[0] = c[1];
  int i = 0;
  a[1] = c[i];
  printf("a[1] = %d\n", a[1]);
  for (i = 1; i<10; i++){
    a[i] = (int)(random()*100/RAND_MAX);
    printf("a[%d] = %d\n", i, a[i]);
  }
}

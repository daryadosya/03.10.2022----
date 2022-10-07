/*!
\authors     Дарья Лебедева <daryadosya@yandex.ru>
\version     0.0.1a
\date        03.10.2022
\coopyright  MIT
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "010.h"

void sort (int b[10]);

void s0021 (){
  int a[10];
  int i,j,buf;
  for (i = 0; i<10; i++){
    a[i] = (int)(random()*100/RAND_MAX);
    printf("a[%d] = %d\n", i, a[i]);

    sort (a);
}
}

void sort (int b[10]){
  bool t = false;  //  убрать
  int tmp, i;
  do {
    t = false; // bool t = false;
    for (int i=0; i<10; i++){
      if (b[i]>b[i+1]){
        tmp = b[i];
        b[i] = b[i+1];
        b [i+1] = tmp;
        t = true;
    }
  }
} while (t);
  for (i = 0; i<10; i++){
  printf("b[%d] = %d\n", i, b[i]);
}
}

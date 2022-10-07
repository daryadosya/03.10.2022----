/*!
\authors     Дарья Лебедева <daryadosya@yandex.ru>
\version     0.0.1a
\date        03.10.2022
\coopyright  MIT
*/

#include <stdio.h>
#include <stdlib.h>
#include "009.h"

void s0021 (){
  int a[10];
  int i,j,buf;
  for (i = 0; i<10; i++){
    a[i] = (int)(random()*100/RAND_MAX);
    printf("a[%d] = %d\n", i, a[i]);
}

printf("\n");

for (j=0; i<1000; i++){

  for (i=0; i<9; i++){
    int q = a[i];
      if (a[i+1] < a[i])
        {
        a[i] = a[i+1];
        a[i+1] = q;
        buf = 0;
        }
        }

}
for (i = 0; i<10; i++){
printf("a[%d] = %d\n", i, a[i]);
}

}

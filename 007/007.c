/*!
\authors     Дарья Лебедева <daryadosya@yandex.ru>
\version     0.0.1a
\date        03.10.2022
\coopyright  MIT
*/

#include <stdio.h>
#include "007.h"

int factorial (int *a);

void start () {
  unsigned long long res = 0;
  unsigned int n = 5;
  fact (&n, &res);
  printf("\n\n\nФакториал числа а: %d\n\n\n", res);
}
/*!
&n - я передаю адрес
а потом в функции я провожу процедура РАЗЫМЕНОВАНИЯ
то есть *i - это я получаю значениче из адреса
*/
void fact (unsigned int *i, unsigned long long *p){
    if (*i>1){
      if (*p==0)*p=(unsigned long long)*i;
      *i =*i-1;
      *p=*p * (unsigned long long)*i;
      fact (i,p);
    }
    }

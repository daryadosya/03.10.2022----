/*!
\authors     Дарья Лебедева <daryadosya@yandex.ru>
\version     0.0.1a
\date        03.10.2022
\coopyright  MIT
*/

/// подключаем стандартную библиотеку
#include "006.h"
#include <stdio.h>
///Объявляем функцию main
int main (void) {
   int ma = 0;
   int *pm;
   pm = &ma;
   start (pm);
   printf ("\nma = %d", ma);
}

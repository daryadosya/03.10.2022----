/*!
\authors     Дарья Лебедева <daryadosya@yandex.ru>
\version     0.0.1a
\date        03.10.2022
\coopyright  MIT
*/
#define HELLO "Hello world"
/// подключаем стандартную библиотеку
#include <stdio.h>
#include "006.h"

void start (int *p) {
  printf("Адрес а: %d", p);
  printf("\nЗначение а: %d", *p);
  *p = 10;
}

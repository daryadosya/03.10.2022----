/*!
\authors     Дарья Лебедева <daryadosya@yandex.ru>
\version     0.0.1a
\date        03.10.2022
\coopyright  MIT
*/

/// подключаем стандартную библиотеку
#include <stdio.h>
#include "004.h"
#include <math.h>
#include "Disc.c"
#include "WithoutA.c"

float SqrEqu(float a, float b, float c) ;

int start (void) {
  float a,b,c;
  printf("\nВведите коэффициенты квадратного уравнения a: ");
  scanf ("%f", &a);
  printf("\nВведите коэффициенты квадратного уравнения b: ");
  scanf ("%f", &b);
  printf("\nВведите коэффициенты квадратного уравнения c: ");
  scanf ("%f", &c);
  SqrEqu(a, b, c);
  return 0;
}

float SqrEqu(float a, float b, float c) {
  float x, x1, x2, D;

  if (a==0) {
  x = WOa (b, c);
  printf("\nX= %f", x);
  }

  else if (a!=0){
  D = Disc (a,b,c);
    if (D<0) {
    printf("\nНет решения: ");
    }
    if (D>=0) {
      x1 = (-b+sqrt(D))/2/a;
      x2 = (-b-sqrt(D))/2/a;
      printf("\nX1 x1 = %f", x1);
      printf("\nX2 x2 = %f", x2);
    }
  }

}

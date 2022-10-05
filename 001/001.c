/*!
\authors     Дарья Лебедева <daryadosya@yandex.ru>
\version     0.0.1a
\date        03.10.2022
\coopyright  MIT
*/

/// подключаем стандартную библиотеку
#include <stdio.h>
void s001 (int a);

int start (void){
    /// Выводим в стандартный вывод надпись \
        Hello world!!!
    int a = 5;
    int b,c;
    b = a * 3;
    c = b - a;
    printf("c = %d;", c);
    printf("a = %d\n", a);
    printf("b = %d", b);
    int d;
    printf("\nВведите переменную d: ");
    scanf ("%d", &d);
    printf("\nd =%d", d);
    s001(d);
    return 0;
}
void s001 (int a){
  if(a>0){
    printf ("\nПеременная а: %d , больше 0.", a);
  }
  else if (a == 0){
    printf ("\nПеременная а: %d , равна 0.", a);
  }
  else{
    printf ("\nПеременная а: %d , меньше 0.", a);
  }
}

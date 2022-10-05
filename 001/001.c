/*!
\authors     Дарья Лебедева <daryadosya@yandex.ru>
\version     0.0.1a
\date        03.10.2022
\coopyright  MIT
*/

/// подключаем стандартную библиотеку
#include <stdio.h>

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
    return 0;
}

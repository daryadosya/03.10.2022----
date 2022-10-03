### *!
#\authors     Дарья Лебедева <daryadosya@yandex.ru>
#\version     0.0.1a
#\date        03.10.2022
#\coopyright  MIT
###
PACKAGE=hello.osvoj.ru
default: clear hello
	   gcc -o hello.exe ./main.c ./hello.o

hello:
	gcc -c ./hello.c

clear:
	   rm -rf ./*.exe ./*.o

doc:
	doxygen ./Doxyfile

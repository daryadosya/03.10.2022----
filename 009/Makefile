### *!
#\authors     Дарья Лебедева <daryadosya@yandex.ru>
#\version     0.0.1a
#\date        03.10.2022
#\coopyright  MIT
###

default: clear 009
	   gcc -o 009.exe ./main.c ./009.o

009:
	gcc -c ./009.c

clear:
	   rm -rf ./*.exe ./*.o

doc:
	doxygen ./Doxyfile

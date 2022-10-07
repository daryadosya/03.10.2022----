### *!
#\authors     Дарья Лебедева <daryadosya@yandex.ru>
#\version     0.0.1a
#\date        03.10.2022
#\coopyright  MIT
###

default: clear 011
	   gcc -o 011.exe ./main.c ./011.o

011:
	gcc -c ./011.c

clear:
	   rm -rf ./*.exe ./*.o

doc:
	doxygen ./Doxyfile

all: game

gam: game.o 
	gcc -Wall game.c -o game 
  
reset: 
	rm *o game 

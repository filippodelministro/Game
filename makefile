all: snake

snake: snake.o 
	gcc -Wall snake.c -o snake 
  
reset: 
	rm *o snake 

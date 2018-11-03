fork:fork.c
	gcc fork.c -o fork -g
.PHONY:clean
clean:
	rm -f fork

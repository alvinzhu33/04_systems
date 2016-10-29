compile: main.c
	gcc main.c

run: compile
	./a.out

clean:
	rm *.out

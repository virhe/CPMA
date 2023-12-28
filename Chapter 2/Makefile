CC = clang
CFLAGS = -Wall -Wextra -pedantic -std=c99

all: ex1 ex3 ex4 proj1

exercises: ex1 ex3 ex4

projects: proj1 proj2

ex1:
	$(CC) $(CFLAGS) -o ex1 Exercises/ex1.c

ex3:
	$(CC) $(CFLAGS) -o ex3 Exercises/ex3.c

ex4:
	$(CC) $(CFLAGS) -o ex4 Exercises/ex4.c

proj1:
	$(CC) $(CFLAGS) -o proj1 Projects/proj1.c

proj2:
	$(CC) $(CFLAGS) -o proj2 Projects/proj2.c

clean:
	rm ex1 ex3 ex4 proj1 proj2
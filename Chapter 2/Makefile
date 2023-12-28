CC = clang
CFLAGS = -Wall -Wextra -pedantic -std=c99

all: ex1 ex3 ex4 proj1 proj2 proj3 proj4 proj5 proj6

exercises: ex1 ex3 ex4

projects: proj1 proj2 proj3 proj4 proj5 proj6

# Exercises
ex1:
	$(CC) $(CFLAGS) -o ex1 Exercises/ex1.c

ex3:
	$(CC) $(CFLAGS) -o ex3 Exercises/ex3.c

ex4:
	$(CC) $(CFLAGS) -o ex4 Exercises/ex4.c

# Projects
proj1:
	$(CC) $(CFLAGS) -o proj1 Projects/proj1.c

proj2:
	$(CC) $(CFLAGS) -o proj2 Projects/proj2.

proj3:
	$(CC) $(CFLAGS) -o proj3 Projects/proj3.c

proj4:
	$(CC) $(CFLAGS) -o proj4 Projects/proj4.c

proj5:
	$(CC) $(CFLAGS) -o proj5 Projects/proj5.c

proj6:
	$(CC) $(CFLAGS) -o proj6 Projects/proj6.c

clean:
	rm ex1 ex3 ex4 proj1 proj2 proj3 proj4 proj5 proj6
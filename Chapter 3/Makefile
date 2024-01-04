CC = clang
CFLAGS = -Wall -Wextra -pedantic -std=c99

all: exercises projects

exercises: ex1 ex2 ex6

projects: proj1 proj2 proj3 proj4 proj5 proj6

# Exercises
ex1:
	$(CC) $(CFLAGS) -o ex1 Exercises/Ex1/ex1.c

ex2:
	$(CC) $(CFLAGS) -o ex2 Exercises/Ex2/ex2.c

ex6:
	$(CC) $(CFLAGS) -o ex6 Exercises/Ex6/ex6.c

# Projects
proj1:
	$(CC) $(CFLAGS) -o proj1 Projects/Proj1/proj1.c

proj2:
	$(CC) $(CFLAGS) -o proj2 Projects/Proj2/proj2.c

proj3:
	$(CC) $(CFLAGS) -o proj3 Projects/Proj3/proj3.c

proj4:
	$(CC) $(CFLAGS) -o proj4 Projects/Proj4/proj4.c

proj5:
	$(CC) $(CFLAGS) -o proj5 Projects/Proj5/proj5.c

proj6:
	$(CC) $(CFLAGS) -o proj6 Projects/Proj6/proj6.c

clean:
	rm ex1 ex2 ex6 proj1 proj2 proj3 proj4 proj5 proj6
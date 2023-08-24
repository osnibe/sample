CC=gcc

all: min

min:
	$(CC) min.c -o min
max:
	$(CC) max.c -o max
min:
	$(CC) my_strlen.c -o my_strlen

clean:
	find . -type f -executable -exec rm -f {} \;

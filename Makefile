CC=gcc

all: min max my_strlen

min:
	$(CC) min.c -o min
max:
	$(CC) max.c -o max
my_strlen:
	$(CC) my_strlen.c -o my_strlen

clean:
	find . -type f -executable -exec rm -f {} \;

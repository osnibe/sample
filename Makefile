CC=gcc

all: min max my_strlen seg

min: min.c
	$(CC) min.c -o min
max: max.c
	$(CC) max.c -o max
my_strlen: my_strlen.c
	$(CC) my_strlen.c -o my_strlen

seg: seg.c
	$(CC) -g -O0 seg.c -o seg

test2: source1.c source2.c
	$(CC) -g -O0 source1.c source2.c -o test2

clean:
	find . -type f -executable -exec rm -f {} \;

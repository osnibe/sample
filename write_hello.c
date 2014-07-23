#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

	int fd;
	int count;
	char *str = "Hello!";

	if (argc != 3) {
		fprintf(stderr, "Usage: %s filename count\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	sscanf(argv[2], "%d", &count);

	fd = open(argv[1], O_WRONLY|O_CREAT|O_TRUNC, 0664);
	if(fd < 0) {
		perror(argv[1]);
		exit(EXIT_FAILURE);
	}

	while(count--)
		write(fd, str, strlen(str));

	if(close(fd) < 0) {
		perror(argv[1]);
		exit(EXIT_FAILURE);
	}

	return EXIT_SUCCESS;
}

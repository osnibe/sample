#include <stdio.h>

#define BUFFER_SIZE 1024

int main()
{
  int a, b;
  char str[BUFFER_SIZE];

  fgets(str, sizeof(str), stdin);
  sscanf(str, "%d %d", &a, &b);

  if (a < b) {
    printf("%d\n", a);
  } else {
    printf("%d\n", b);
  }

  return 0;
}

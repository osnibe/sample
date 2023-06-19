#include <stdio.h>

#define buf 128

int main(void)
{
  int i;
  char str[buf];

  fgets(str, sizeof(str), stdin);
  sscanf(str, "%d", &i);

  printf("%d", i);

  return 0;
}

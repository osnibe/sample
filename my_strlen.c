#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main()
{
  size_t len;
  char str1[BUFFER_SIZE];
  char str2[BUFFER_SIZE];

  fgets(str1, sizeof(str1), stdin);
  sscanf(str1, "%s", &str2);

  len = strlen(str2);
  printf("%s:%d\n",str2, len);

  return 0;
}

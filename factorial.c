#include <stdio.h>
#include <stdlib.h>

#define buf 128

int factorial(int n)
{
  if (n > 0)
    return n * factorial(n - 1);
  else
    return 1;
}

int main()
{
  int x;
  char str[buf];

  printf("input x: ");

  fgets(str, sizeof(str), stdin);
  sscanf(str, "%d", &x);

  printf("Factorial of %d = %d\n", x, factorial(x));

  return EXIT_SUCCESS;
}

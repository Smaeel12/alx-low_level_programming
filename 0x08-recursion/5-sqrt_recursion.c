#include <unistd.h>
#include <stdio.h>
int _putchar(char c)
{
    return (write(1, &c, 1));
}

int _sqrt_recursion(int n)
{
  int result = 1;
  if (n > 1)
  {
    result = _sqrt_recursion(n / 2);
    if ((result * result) != n)
      return (result);
    else
      result += 1;
  }
  return (1);
}

int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}

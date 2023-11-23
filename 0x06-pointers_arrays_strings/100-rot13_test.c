#include <stdio.h>

char *rot13(char *s)
{
int tmp;
for(int i = 0; s[i] != '\0' || s[i] != '\n'; i++)
{

if (s[i] >= 65 && s[i] <= 90)
{
tmp = s[i] + 13;
if (tmp > 90)
{
  s[i] = 65;
  s[i] = s[i] + (tmp - 90);
}
else
  s[i] = tmp;
}


if (s[i] >= 97 && s[i] <= 122)
{
tmp = s[i] + 13;
if (tmp > 122)
{
  s[i] = 97;
  tmp = tmp - 122;
  s[i] = s[i] + tmp;
}
else
  s[i] = tmp;
}

tmp = 0;
}
return (s);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "HEllo\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return (0);
}

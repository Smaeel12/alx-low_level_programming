#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(ULONG_MAX, 0);
    printf("%d\n", n);
    n = get_bit(ULONG_MAX, 100);
    printf("%d\n", n);
    n = get_bit(2048, 20);
    printf("%d\n", n);
    return (0);
}

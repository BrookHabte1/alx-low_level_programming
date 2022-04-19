#include "main.h"
/**
 *print_rev - reverse a string.
 *@n: is an integer.
 */
void print_rev(char *s)
{
int n = 0;
while (s[n])
{
n++;
}
while (n--)
{
_putchar(s[n]);
}
_putchar('\n');
}

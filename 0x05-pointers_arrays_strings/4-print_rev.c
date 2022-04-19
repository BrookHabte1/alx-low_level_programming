#include "main.h"
/**
 *print_rev - reverse a string.
 *@s: is a pointer.
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

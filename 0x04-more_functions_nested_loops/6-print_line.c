#include "main.h"
/**
 * print_line - prints the numbers from 0 to 14 times 10.
 *@n: character
 *
 * Return: Nothing.
 */
void print_line(int n)
{
int a;
if (n > 0)
{
for (a = 1; a <= n ; a++)
{
_putchar('_');
}
}
_putchar('\n');
}

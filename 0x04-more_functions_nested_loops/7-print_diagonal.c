#include "main.h"
/**
 * print_diagonal - prints the numbers from 0 to 14 times 10.
 *@n: character
 *
 * Return: Nothing.
 */
void print_diagonal(int n)
{
int a;
int b;
if (n > 0)
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
_putchar('\n');
}

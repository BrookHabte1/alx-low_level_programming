#include "main.h"
/**
 * print_most_numbers - prints numbers.
 *
 * Return: 0 on success.
 */
void print_most_numbers(void)
{
int a;
for (a = 48; a <= 57; a++)
{
if (!(a == '2' || a == '4'))
{
_putchar(a);
}
}
_putchar('\n');
}

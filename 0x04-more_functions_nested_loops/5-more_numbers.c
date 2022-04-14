#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14 times 10.
 *
 * Return: Nothing!
 */
void more_numbers(void)
{
int a, b;
b = 0;
while (b <10)
{
for (a = 0 ; a <= 14 ; a++)
{
if (i >= 10)
{
_putchar('1');
}
_putchar(i % 10 + 48);
}
_putchar('\n');
b++;
}
}

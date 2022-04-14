#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14 times 10.
 *
 * Return: Nothing!
 */
void more_numbers(void)
{
int a, b;
a = 0;
while (a <10)
{
for (b = 0 ; b <= 14 ; b++)
{
if (b >= 10)
{
_putchar('1');
}
_putchar(b % 10 + 48);
}
a++;
}
_putchar('\n');
}

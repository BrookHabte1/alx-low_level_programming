#include "main.h"
/**
 * puts_half - prints half of the string.
 *@str: input string.
 */
void puts_half(char *str)
{
int a = 0;
int b = 0;
while (str[a])
{
a++;
}
if (a % 2 == 0)
b = a / 2;
else
{
b = (a + 1) / 2;
}
while (str[b])
{
_putchar(str[b]);
b++;
}
_putchar('\n');
}

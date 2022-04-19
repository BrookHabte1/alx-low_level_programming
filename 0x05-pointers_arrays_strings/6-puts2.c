#include "main.h"
/**
 * puts2 - jump one character and prints the next.
 *@str: input string.
 */
void puts2(char *str)
{
int n = 0;
for (n = 0; *str; str++)
{
if (n++ % 2 == 0)
_putchar(*str);
}
_putchar('\n');
}

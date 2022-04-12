#include "main.h"
/**
 *prints lowercase alphabet 10 times.
(*Return: 0 on success
 *
 */
void print_alphabet_x10(void)
{
char a;
int b;
while (a <= 10)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
a++;
}
}

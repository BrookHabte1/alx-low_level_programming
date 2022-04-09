#include <stdio.h>
/**
 * main - Lowercase Letters!.
(*
 * Return: 0 on success
 */
int main(void)
{
int x;
int y;
for (x = 0 ; x < 9 ; x++)
{
for (y = 1 ; x < 10 ; y++)
{
putchar(x + 48);
putchar(y + 48);
if (x == 8 && y == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - positive or negative.
(*
 * Return: 0 on success
 */
int main(void)
{
int x;
for (x = 0; x <= 9; x++)
{
putchar(x + 48);
if (x != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

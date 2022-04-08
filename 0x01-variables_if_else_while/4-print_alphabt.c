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
char x;
for (x = 'a'; x <= 'z'; x++)
{
if (x != 'e' && x != 'q')
{
putchar(x);
}
}
putchar('\n');
return (0);
}

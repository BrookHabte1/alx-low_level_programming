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
char y;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
for (y = 'A'; y <= 'Z'; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}

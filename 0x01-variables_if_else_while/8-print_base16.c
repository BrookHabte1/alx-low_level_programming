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
char y;
for (x = 0; x <= 9; x++)
{
putchar(x + 48);
}
for (y = 'a'; y <= 'e'; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}

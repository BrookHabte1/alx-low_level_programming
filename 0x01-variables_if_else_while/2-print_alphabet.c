#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - positive or negative.
(*
 * Return: 0 on success
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
for(int x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
return (0);
}

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
int r;
srand(time(0));
n = rand() - RAND_MAX / 2;
r = n % 10;
printf("Last digit of %d is %d ", n, n % 10);
if (r > 5)
printf("and is greater than 5");
else if (r == 0)
printf("and is 0");
else if (r < 6 && r != 0)
printf("and is less than 6 and not 0");
return (0);
}

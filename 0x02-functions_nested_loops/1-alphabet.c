#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - positive or negative.
(*
 * Return: 0 on success
 */
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a ++)
putchar(a);
}
int main()
{
print_alphabet();
putchar('\n');
return 0;
}

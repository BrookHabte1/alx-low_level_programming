#include "main.h"
/**
 * _puts - a function that prints a string.
 *@str: pointer
 * Return: it will not return anything.
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}

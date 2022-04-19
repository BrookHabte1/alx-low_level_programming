#include "main.h"
#include <string.h>
/**
 *_strlen - returns the length of a function.
 *@s: is a character.
 *
 *Return: This function does not return anything.
 */
int _strlen(char *s)
{
int n = 0;
while (*s != '\0')
{
n++;
s++;
}
return (n);
}

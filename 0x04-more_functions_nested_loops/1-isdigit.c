#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check if digit.
 *
 *@c: digit
 *
 * Return: 0 on success.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);

return (0);
}

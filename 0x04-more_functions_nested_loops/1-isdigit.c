#include "main.h"
/**
 * _isdigit - check if digit.
 *
 *@c: character
 *
 * Return: 0 on success.
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
return (1);

return (0);
}

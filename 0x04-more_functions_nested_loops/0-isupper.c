#include "main.h"
/**
 * _isupper - check if uppercase letter.
 *
 *@c: character
 *
 * Return: 0 on success.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);

return (0);
}

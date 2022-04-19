#include "main.h"
/**
 * swap_int - swap the value of two integers using pointer.
 *@a: pointer
 *@b: pointer
 * Return: it will not return anything.
 */
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}

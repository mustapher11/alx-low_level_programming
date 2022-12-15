#include "main.h"

/**
 * print_sign - Prints + and returns 1 if c is  greater than 0, 0 and 0 if n is 0 and - and -1 if is less than 0
 * @n: Integer to be checked
 * Return: 1, 0, or -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(0 + '0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

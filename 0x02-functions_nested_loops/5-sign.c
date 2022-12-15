#include "main.h"

/**
 * print_sign - Returns and prints respective value and sign
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

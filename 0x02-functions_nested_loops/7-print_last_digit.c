#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a number
 * @n: The number which its last digit is required
 * Return: The last digit of a number
 */
int print_last_digit(int n)
{
int r;
r = n % 10;
if (r < 0)
r = r * -1;
_putchar(r + '0');
return (r);
}

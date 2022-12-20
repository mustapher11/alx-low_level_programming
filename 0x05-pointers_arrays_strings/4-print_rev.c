#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print the reverse of a string
 * @s: The string to be reversed
 */
void print_rev(char *s)
{
int i, j;
i = strlen(s);
for (j = i - 1; j >= 0; j--)
_putchar(s[j]);
_putchar('\n');
}

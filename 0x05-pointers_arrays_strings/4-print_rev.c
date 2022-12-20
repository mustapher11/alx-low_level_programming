#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Print the reverse of a string
 * @s: The string to be reversed
 */
void print_rev(char *s)
{
strrev(s);
printf("%s\n", s);
}

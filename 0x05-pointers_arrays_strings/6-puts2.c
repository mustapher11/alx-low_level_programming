#include "main.h"
#include <string.h>

/**
 * _puts2 - Prints even numbers in the string
 * @str: The string to be printed
 */
void _puts2(char *str)
{
int i;
for (i = 0; i < strlen(str); i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
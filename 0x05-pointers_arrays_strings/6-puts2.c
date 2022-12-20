#include "main.h"
#include <string.h>

/**
 * _puts2 - Prints even numbers in the string
 * @str: The string to be printed
 */
void puts2(char *str)
{
int i;
int j = strlen(str);
for (i = 0; i < j; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}

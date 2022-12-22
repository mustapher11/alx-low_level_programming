#include "main.h"

/**
 * *string_toupper - Converts lowercase letters of a string to upper
 * @s: String whose lowercase letters are to be converted to upper
 * Return: Uppercase letter string.
 */
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
}
return (s);
}

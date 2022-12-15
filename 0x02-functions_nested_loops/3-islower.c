#include "main.h"

/**
 * _islower - checks whether an alphabet is uppercase or lowercase
 *
 * Return: Either 1 for lowercase and 0 for uppercase
 */
int _islower(int c)
{
if ( c >= 65 && c <= 90)
return 0;
else if (c >= 97 && c <= 122)
return 1;
}

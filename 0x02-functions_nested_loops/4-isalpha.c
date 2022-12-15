#include "main.h"

/**
 * isalpha - Checks whether c is a letter
 * @c: Integer to be checked
 * Return: Either for uppercase or lowercase letters. Otherwise returns 0
 */
int _isalpha(int c)
{
return ((c >= 65 && c <= 90) || c >= 97 && c <= 122));
}

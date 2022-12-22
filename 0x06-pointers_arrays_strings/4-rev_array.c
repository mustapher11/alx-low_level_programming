#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Function to reverse contents of an array
 * @a: The array
 * @n: Number of array contents
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
int temp, i;
for (i = n - 1; i >= 0; i--)
{
tmp = a[n - 1 - i];
a[n -1 - i] = a[i];
a[i] = tmp;
}
}

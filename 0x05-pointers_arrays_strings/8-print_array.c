#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints array of numbers
 * @a: Array to be printed
 * #n: Length of the array
 */
void print_array(int *a, int n);
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n)
printf(", ");
}
printf("\n");
}

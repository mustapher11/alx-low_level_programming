#include "main.h"
/**
 *swap_int - Function to swap two integer values
 *@a: First integer to be swiped
 *@b: Second integer to be swiped
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}

#include "sort.h"

/**
 * swap_ints - Swap two int values
 * @x: First int
 * @y: Second int
 */

void swap_ints(int *x,int *y)
{
int tmp;
tmp = *x; 
*x = *y;
*y = tmp;
}

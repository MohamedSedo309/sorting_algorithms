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

/**
 * bubble_sort - sort array of integers in ascending order
 * @array: array to sort
 * @size: array size
 * Description: Prints the array after each int swap.
 */

void bubble_sort(int *array, size_t size)
{
size_t i;
size_t length;
bool b = false;

if (array == NULL || size < 2)
{
return;
}

while (b == false)
{
b = true;
for (i = 0; i < length - 1; i++)
{
if (array[i] > array[i + 1])
{
swap_ints(array + i, array + i + 1);
print_array(array, size);
b = false;
}
}
length--;
}
}

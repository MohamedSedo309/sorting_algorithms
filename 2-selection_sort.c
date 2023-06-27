#include "sort.h"

/**
 * selection_sort - sort array of integers in ascending order
 * @array: array to sort
 * @size: array size
 * Description: Prints the array after each int swap.
 */

void selection_sort(int *array, size_t size)
{
size_t i, j, min_idx;
if (array == NULL || size < 2)
{
return;
}
for (i = 0; i < size - 1; i++)
{
min_idx = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_idx])
{
min_idx = j;
}
}
if (min_idx != i)
{
int tmp = array[i];
array[i] = array[min_idx];
array[min_idx] = tmp;
print_array(array, size);
}
}
}

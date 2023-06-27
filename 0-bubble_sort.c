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
    int temp, swapped;

    if (array == NULL || size < 2)
        return;

    do {
        swapped = 0;
        for (size_t i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1;
                print_array(array, size);
            }
        }
    } while (swapped);
}

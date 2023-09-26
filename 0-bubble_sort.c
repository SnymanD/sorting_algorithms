#include "sort.h"

/**
 * swap_ints - The program that swaps two integers in an array.
 * @a: The 1st integer to swap.
 * @b: The 2nd integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sorting an array of integers in ascending order.
 * @array: An array to sort.
 * @size: Size of the array.
 * Description: Prints the array after each swap.
 */

void bubble_sort(int *array, size_t size)
{
	size_t x, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (x = 0; x < len - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				swap_ints(array + x, array + x + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}

#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void print_array(const int *array, size_t size)
{
	size_t u;

	u = 0;
	while (array && u < size)
	{
		if (u > 0)
			printf(", ");
		printf("%d", array[u]);
		++u;
	}
	printf("\n");
}

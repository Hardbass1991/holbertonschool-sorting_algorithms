#include <stdio.h>
#include "sort.h"
/**
 * is_sorted - tells whether an array is sorted in ascending order
 * @array: input array
 * @size: size of array
 *
 * Return: 1 if array is sorted, 0 otherwise
 */
int is_sorted(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size - 1; i++)
		if (array[i] > array[i + 1])
			return (0);
	return (1);
}

/**
 * bubble_sort - performs a bubble sorting
 * @array: input array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, tmp;

	if (array)
		while (!is_sorted(array, size))
			for (i = 0; i < size - 1; i++)
				if (array[i] > array[i + 1])
				{
					tmp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = tmp;
					print_array(array, size);
				}
}

#include <limits.h>
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
 * selection_sort - performs a selection sorting
 * @array: input array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int min, tmp;
	size_t i, j, min_idx;

	if (array && array[1])
		for (i = 0; i < size; i++)
		{
			if (!is_sorted(array, size))
			{
				min = INT_MAX;
				for (j = i; j < size; j++)
				{
					if (array[j] < min)
					{
						min = array[j];
						min_idx = j;
					}
				}
				if (min_idx != i)
				{
					tmp = array[i];
					array[i] = array[min_idx];
					array[min_idx] = tmp;
					print_array(array, size);
				}
			}
		}
}

#include <stdio.h>
#include "sort.h"

int is_sorted(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size - 1; i++)
		if (array[i] > array[i + 1])
			return 0;
	return 1;
}

void bubble_sort(int *array, size_t size)
{
	size_t i, tmp;
	
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

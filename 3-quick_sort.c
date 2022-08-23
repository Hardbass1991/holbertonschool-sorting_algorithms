#include "sort.h"
#include <stdio.h>

int partition(int *array, int a, int b, size_t size)
{
	int pivot, pivot_idx, i, tmp;
	pivot = array[b];
	pivot_idx = a - 1;
	
	for (i = a; i < b; i++)
	{
		if (array[i] <= pivot)
		{
			pivot_idx++;
			tmp = array[pivot_idx];
			array[pivot_idx] = array[i];
			array[i] = tmp;
			/*print_array(array, size);*/
		}
	}
	pivot_idx++;
	tmp = array[pivot_idx];
	array[pivot_idx] = array[b];
	array[b] = tmp;
	print_array(array, size);
	return(pivot_idx);
}

void quick_sort_0(int *array, size_t a, size_t b, size_t size)
{
	int p;

	if ((b > a) && (b <= size))
	{
		p = partition(array, a, b, size);
		/*printf("p: %d\n", p);*/
		quick_sort_0(array, a, p - 1, size);
		quick_sort_0(array, p + 1, b, size);
	}
}

void quick_sort(int *array, size_t size)
{
	quick_sort_0(array, 0, size, size);
}

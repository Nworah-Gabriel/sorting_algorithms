#include "sort.h"

/**
 * bubble_sort - a fuction that sorts an array by comparison in every iteration
 * @array: array to be sorted
 * @size: size of the array
 * Return - None
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, tmp, x;
        int (*ptr)(int, size_t);
        ptr = sort()

	if(ptr(array, size) == 0)
	{
		print_array(array, size);
		exit(0);
	}
	for (x = 0; x < size ; x++)
	{
		for (j = 1; j < size - x; j++)
		{
			if (array[j - 1] > array[j])
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
                                print_array(array, size);
			}
                }
	}
}
int sort(int *array, size_t size)
{	
	size_t i;
	
	for (i = 0; i < size; i++)
	{
		if (array[i - 1] < array[i])
		continue;
		else
		{
			return (-1);
			break;
		}
	}
	return (0);
}

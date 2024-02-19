#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
<<<<<<< HEAD
	size_t tr, len = size;
=======
	size_t i, len = size;
>>>>>>> 6c47b61fd1bdf7e73f819aaa6611de7c18447faf
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
<<<<<<< HEAD
		for (tr = 0; tr < len - 1; tr++)
		{
			if (array[i] > array[tr + 1])
			{
				swap_ints(array + tr, array + tr + 1);
=======
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
>>>>>>> 6c47b61fd1bdf7e73f819aaa6611de7c18447faf
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}

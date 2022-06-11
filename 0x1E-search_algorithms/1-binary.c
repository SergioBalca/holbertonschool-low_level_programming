#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search- searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: the index where value is located
 * or -1 if array is NULL or value is not present in array
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);

	print_array(array, 0, array[size - 1]);
	index = recursive_binary_search(array, size, value, 0, size - 1);
	return (index);


}

/**
 * recursive_binary_search- searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @arr: a pointer to the first element of the array to search in
 * @v: value to search for
 * @s: size of the array
 * @low: pointer to first element in array
 * @high: pointer to last element in array
 * Return: the index where value is located
 * or -1 if value is not present in array
 */
int recursive_binary_search(int *arr, size_t s, int v, int low, int high)
{
	int half;

	if (high >= low)
	{
		half = low + (high - low) / 2;
		/*Found value in the middle*/
		if (arr[half] == v)
		{
			return (half);
		}
		/*search value in left array*/
		if (arr[half > v])
		{
			print_array(arr, low, half - 1);
			return (recursive_binary_search(arr, s, v, low, half - 1));
		}
		/*search value in right array*/
		print_array(arr, half + 1, high);
		return (recursive_binary_search(arr, s, v, half + 1, high));
	}
	/*value not found in array*/
	return (-1);

}

/**
 * print_array- prints a subarray
 * @array: a pointer to the first element of the array to search in
 * @low: pointer to first element in array
 * @high: pointer to last element in array
 * Return: Nothing
 */
void print_array(int *array, int low, int high)
{

	printf("Searching in array: ");
	while (high >= low)
	{

		if (low == high)
			printf("%d\n", array[low]);
		else
			printf("%d, ", array[low]);
		low++;
	}


}

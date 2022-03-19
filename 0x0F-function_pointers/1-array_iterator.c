#include "function_pointers.h"

/**
 * array_iterator- function that executes a function given as a parameter
 * --------------- on each element of an array
 * @array: pointer to an array of integers
 * @size: size of the array
 * @action: poiniter to funcion that given an integer as parameter
 * Return: print to screen content array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(*(array + i));
}

#include "main.h"

/**
 *reverse_array- reverses the content of an array of integers.
 *
 *@a: array of integers
 *@n: is the number elements of the array
 *
 *Return: reverse the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int array[20];
	int *final = a;

	final += n - 1;

	for (i = 0; i < n; i++)
		array[i] = *final--;

	for (i = 0; i < n; i++)
		*a++ = array[i];
}

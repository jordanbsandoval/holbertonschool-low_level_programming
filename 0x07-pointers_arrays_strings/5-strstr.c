#include "main.h"

/**
 * _strstr- function that locates a substring.
 * @haystack: pointer to string to evaluate
 * @needle: find the first ocurrence of the substring
 * Return: pointer to string
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	for (i = 0; *(haystack + i) != '\0'; i++)
		if (*(haystack + i) == *(needle))
			return (haystack + i);
	return (NULL);
}

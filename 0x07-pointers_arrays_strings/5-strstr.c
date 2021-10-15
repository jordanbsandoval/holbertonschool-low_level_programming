#include "main.h"

/**
 * _strstr- function that locates a substring.
 *
 * @haystack: pointer a char to evaluate
 * @needle: pointer a char from string
 * Description:	 function finds the first occurrence of the substring
 *	 needle in the string haystack
 *
 * Return: NULL if no search character
 *	   puntero a la cadena que contiene el conjunto de bytes
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; *(needle + i) != '\0'; i++)
		for (i = 0; *(haystack) != '\0'; haystack++)
			if (*(needle + i) == *(haystack))
				return (haystack);
	return (NULL);
}

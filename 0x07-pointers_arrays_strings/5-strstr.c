#include "main.h"

/**
 *_strstr- function that locates a substring.
 *
 *@haystack: string get me the substring
 *@needle: substring to search
 *
 *Return: pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*needle)
	{
		int i = 0;

		while (haystack[i])
		{
			if (*needle == haystack[i])
				return (needle);
			i++;
		}
		needle++;
	}
	return ('\0');
}

#include "main.h"

/**
 *leet- function that encodes a string into 1337
 *
 *@s: string to evaluate
 *
 *Return: encode string
 */

char *leet(char *s)
{
	char *tmp = s;
	int p;
	char letter[5][2] = {
		{'a', 'A'}, {'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}
	};
	char replace[5] = {'4', '3', '0', '7', '1'};

	while (*s)
	{
		for (p = 0; p < 5; p++)
		{
			if (*s == letter[p][0] || *s == letter[p][1])
				*s = replace[p];
		}
		s++;
	}
	return (tmp);
}

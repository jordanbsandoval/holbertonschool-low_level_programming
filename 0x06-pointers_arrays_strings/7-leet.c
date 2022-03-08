#include "main.h"

/**
 *
 *
 *
 */

char *leet(char *s)
{
	char letter[5] = {'a', 'e', 'o', 't', 'l'};
	char letterM[5] = {'A', 'E', 'O', 't', 'l'};
	char new_value[5] = {'4', '3', '0', '7', '1'};
	int i = 0;
	char *tmp = s;

	for (; *s; s++)
		for (i = 0; i < 5; i++)
			if (*s == letter[i] || *s == letterM[i])
				*s = new_value[i];

	return (s = tmp);
}

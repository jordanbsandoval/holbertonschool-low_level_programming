#include "main.h"

/**
 *
 *
 *
 */

char *rot13(char *s)
{
	char *tmp = s;
	char alp[2][52] = {
		{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"},
		{"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"}
	};
	int i;

	for (; *s; s++)
		for (i = 0; i < 52; i++)
			if (*s == alp[0][i])
			{
				*s = alp[1][i];
				break;
			}

	return (s = tmp);
}

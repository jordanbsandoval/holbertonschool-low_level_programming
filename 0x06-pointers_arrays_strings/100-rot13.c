#include "main.h"

/**
 *rot13- function that encondig a string using rot13-algorith
 *
 *@s: string to modificate
 *
 *Return: encoding the string
 */
char *rot13(char *s)
{
	char *tmp = s;
	int i;
	char alp[2][52] = {
		{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"},
		{"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"}
	};

	while (*s != '\0')
	{
		for (i = 0; i < 52; i++)
			if (*s == alp[0][i])
			{
				*s = alp[1][i];
				break;
			}
		s++;
	}
	return (tmp);
}

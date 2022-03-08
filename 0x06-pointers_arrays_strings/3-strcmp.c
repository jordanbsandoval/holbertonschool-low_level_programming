#include "main.h"

/**
 * _strcmp- function that compares two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: diference ascii between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int res = 0;

	res = *s1 - *s2;

	return (res);
}

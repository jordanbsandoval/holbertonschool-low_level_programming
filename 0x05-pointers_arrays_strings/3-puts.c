#include "main.h"

/**
 *
 *
 *
 */

void _puts(char *str)
{
	for (; *str; str++)
		printf("%c", *str);
	printf("\n");
}

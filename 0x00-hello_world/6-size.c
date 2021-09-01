#include <stdio.h>

/**
 *main- Programa que imprime el tamanio de varios tipos de datos en el computador que se ejecuta y se compila
 *
 *Return: Always 0.
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}

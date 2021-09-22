#include "main.h"

/**
 *main- programa que suma numeros positivos y luego los imprime
 *
 *@argc: Recuento de argumentos
 *@argv: Vector de argumentos
 *
 *Return: imprime la suma o error
 */

int main(int argc, char *argv[])
{
	int i, j, tmp;

	tmp = 0;
	for (i = 1; i < argc; i++)
		for (j = 0; argv[i][j]; j++)
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				puts("Error");
				return (1);
			}

	for (i = 0; i < argc; i++)
		tmp += atoi(argv[i]);

	printf("%d\n", tmp);
	return (0);
}

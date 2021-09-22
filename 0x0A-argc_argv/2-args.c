#include <stdio.h>

/**
 *main- imprimiendo los argumentos pasados incluyendo el archivo principal
 *
 *@argc: Recuento de argumentos
 *@argv: Vector de argumentos
 *
 *Return: imprime los argumentos pasados
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

#include <stdio.h>

/**
 *main- imprimiendo el nombre del programa ejecutado
 *
 *@argc: Recuento de argumentos
 *@argv: Vector de argumentos
 *
 *Return: imprime el nombre del programa
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

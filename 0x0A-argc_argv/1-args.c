#include <stdio.h>

/**
 *main- imprimiendo el numero de argumentos pasados al programa ejecutado
 *
 *@argc: Recuento de argumentos
 *@argv: Vector de argumentos
 *
 *Return: numero de argumentos sin contar el el archivo ejecutado.
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

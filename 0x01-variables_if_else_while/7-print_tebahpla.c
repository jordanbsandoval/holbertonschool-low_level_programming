#include <stdio.h>

void print_str(char s[]);
int str_len(char s[]);
/**
 *str_len- devuelve el numero de elementos en el array
 *
 *@s: string to count
 *
 *Return: number elementos del array
 */
int str_len(char s[])
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 *print_str- imprimer el string pasado
 *
 *@s: string to print
 *
 *Return: always 0.
 */
void print_str(char s[])
{
	int i = 0;

	i = str_len(s);
	i--;

	while (s[i] != '\0')
		putchar(s[i]), i--;

}
/**
 *main- programa que imprime el abecedario en minuscula empezando por la z-a
 *
 *Return: always 0.
 */

int main(void)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyz";

	print_str(alp);
	putchar('\n');
	return (0);
}

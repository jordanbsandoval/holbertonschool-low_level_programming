#include <stdio.h>

void excluye_letras(char s[], char e, char q);
void print_all(char s[]);

/**
 *main- programa que imprime el abecedario en minuscula si cumple la condicion
 *
 *Return: always 0.
 */

int main(void)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyz";
	char letra_delete = 'e';
	char letra_delete2 = 'q';

	excluye_letras(alp, letra_delete, letra_delete2);

	return (0);
}
/**
 *print_all- print un string
 *
 *@s: string to print
 *
 *Return: void
 */
void print_all(char s[])
{
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
}
/**
 *excluye_letras- excluye letras de un string
 *
 *@s: string a evaluar
 *@e: letra a eliminar
 *@q: letra a eliminar
 *
 *Return: void
 */
void excluye_letras(char s[], char e, char q)
{
	int i, p;
	char tmp[26] = "";

	for (i = 0, p = 0; s[i] != '\0'; i++)
		if (s[i] != e && s[i] != q)
		{
			tmp[p] = s[i];
			p++;
		}
	print_all(tmp);
}

#include "3-calc.h"

/**
 * main- program that performs simple operations.
 * @argc: number of parameters
 * @argv: array of pointer to char
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, result = 0;
	int (*ptr_fun)(int, int);

	/*check if the number of arguments is incorrect*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* check if exist the character and that was correct*/
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/*check if users try to / or % by 0*/
	/*target the first character of string for comparation*/
	if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	ptr_fun = get_op_func(argv[2]);
	result = ptr_fun(num1, num2);

	printf("%d\n", result);
	return (0);
}

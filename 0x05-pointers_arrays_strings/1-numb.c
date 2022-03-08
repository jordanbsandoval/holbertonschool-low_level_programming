#include <stdio.h>

int jordan_atoi(char *s);

int main(void)
{
	char num[] = "98";
	int res;

	res = jordan_atoi(num);
	printf("%d", res);
	return (0);
}

int jordan_atoi(char *s)
{
	int resp = 0;
	resp = *(s) - '0';
	return (resp);
}

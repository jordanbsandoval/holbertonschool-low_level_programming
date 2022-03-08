#include "main.h"

int jordan_atoi(char *s);

int main(void)
{
	int num;
	num = jordan_atoi("98");
	printf("%d\n", num);
}

int jordan_atoi(char *s)
{
	int signo = 1;
	int res;

	while(*s)
	{
		/*negative sign*/
		if (*s == '-')
			signo *= -1;
		if (*s >= '0' && *s <= '9')
		{
			res = res * 10 + *s - '0';
			if (*s)
		}
			

	}
	
	return(res);
}

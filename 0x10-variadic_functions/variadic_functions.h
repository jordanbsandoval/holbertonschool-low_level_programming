#ifndef VAR_FUNCTION
#define VAR_FUNCTION
/*librarys*/
#include <stdio.h>
#include <stdarg.h>

/*structure*/
typedef struct formato{
	char *op;
	void ((*f)(va_list));
}formato;

/*prototipos*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_c(va_list);
void print_i(va_list);
void print_f(va_list);
void print_s(va_list);

#endif

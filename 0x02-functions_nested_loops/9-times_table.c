#include "main.h"

/**
 *times_table- imprime la tabla del 9
 *
 *Return: void
 */
void times_table(void)
{
        int i, k;

        for (i = 0; i < 10; i++)
        {
                int tmp = 0;
                for (k = 0; k < 10; k++)
                {
                        int tmp2 = i * k;

                        if (tmp < 10)
                                putchar(tmp + '0');
                        else
                        {
                                putchar((tmp / 10) + '0');
                                putchar((tmp % 10) + '0');
                        }
                        if (k != 9)
                                putchar(',');
                        else
                                break;

                        if ((tmp <= 9 && tmp2 > 9) || tmp > 9)
                                putchar(' ');
                        else
                        {
                                putchar(' ');
                                putchar(' ');
                        }

                        tmp = tmp2;
                }

                putchar('\n');
        }
}

#include "main.h"

/**
 *jack_bauer- imprimiendo las horas del dia
 *
 *Return: void
 */

void jack_bauer(void)
{
	int hora, min, seg, mil;

	for (hora = 0; hora < 3; hora++)
	{
		for (min = 0; min < 10; min++)
		{
			for (seg = 0; seg < 6; seg++)
			{
				for (mil = 0; mil < 10; mil++)
				{
					_putchar(hora + '0');
					_putchar(min + '0');
					_putchar(58);
					_putchar(seg + '0');
					_putchar(mil + '0');
					_putchar('\n');
				}
			}
			if (hora == 2 && min == 3)
				break;
		}
	}
}

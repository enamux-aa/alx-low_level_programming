#include "main.h"
/**
 * jack_bauer- Prints the 24hours
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i, j;

	for (j = 0; j < 24; j++)
	{
		int a = '0' + (j / 10);
		int b = '0' + (j % 10);

		for (i = 0; i < 60; i++)
		{
			int x = '0' + (i / 10);
			int y = '0' + (i % 10);

			_putchar (a);
			_putchar (b);
			_putchar (':');
			_putchar (x);
			_putchar (y);
			_putchar ('\n');
		}
	}
}


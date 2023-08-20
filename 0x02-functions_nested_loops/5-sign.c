#include "main.h"
/**
 * print_sign - print the polarity of n
 *
 * @n: the number to be tested
 *
 * Return: if positive 1, negative  else  0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

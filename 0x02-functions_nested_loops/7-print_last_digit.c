 #include "main.h"
/**
 * print_last_digit- to print the last digist of number
 *
 * @n: the number to tesr
 *
 * Return : the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n > 0)
	{
		_putchar (last_digit);
		return (last_digit);
	}
	else if (n == 0)
	{
		_putchar (last_digit);
		return (0);
	}
	else
	{
		_putchar(-(last_digit));
		return (-(n % 10));
	}
}

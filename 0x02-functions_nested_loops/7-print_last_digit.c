 #include "main.h"
/**
 * print_last_digit- to print the last digit of number
 *
 * @n: the number to tesr
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n >= 0)
	{
		_putchar ('0' + last_digit);
		return (last_digit);
	}
	else
	{
		last_digit = -(last_digit);
		_putchar ('0' + last_digit);
		return (last_digit);
	}
}


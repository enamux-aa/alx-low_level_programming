 #include "main.h"
/**
 * print_last_digit - to print the last digist of number
 *
 * @n: the number to tesr
 *
 * Return : the last digit
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		return (n % 10);
	}
	else if (n == 0 )
	{
		return (0);
	}
	else
	{
		return(-(n % 10));
	}
}

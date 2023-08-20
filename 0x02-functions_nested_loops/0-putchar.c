#include "main.h"

/**
 * print_putchar - prins _putchar to std
 *
 * Return: on success 0.
 */

int main(void)
{
	char c[] =  "_putchar";
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}

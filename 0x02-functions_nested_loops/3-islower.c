#include "main.h"
/**
 * _islower- test if the given input is lowercase
 *
 * @c: the character to be tested
 *
 * Return: if true 1 else 0
 */

int _islower(int c)
{
	if  (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

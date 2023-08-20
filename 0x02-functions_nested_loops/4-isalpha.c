#include "main.h"
/**
 * _isalpha - test is character c is an alphabet
 *
 * @c: the chacter to be tested
 *
 * Return: if true 1  else 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

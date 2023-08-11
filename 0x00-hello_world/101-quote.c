#include <stdio.h>
/**
 * main- Entry point
 *
 * write- Display strings to standard output
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for (int i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);
	}
	return (1);
}

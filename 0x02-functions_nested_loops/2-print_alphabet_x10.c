#include "main.h"

/**
 * print_alphabet_x10 - Prints alohabet 10 times
 *
 * Return: 0 success
*/

void print_alphabet_x10(void)
{
	int alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
		_putchar(alphabet);
		}
		_putchar('\n');
	}
}

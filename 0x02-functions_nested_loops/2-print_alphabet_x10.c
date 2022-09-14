#include "main.h"

/**
 * Prints alphabets - prints alphabet 10 times
 *
 * Return: always return 0
 */
void print_alphabet_x10(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

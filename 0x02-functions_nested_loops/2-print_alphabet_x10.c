#include "main.h"

/**
 * Prints alphabets - prints alphabet 10 times
 *
 * Return: always return 0
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 20)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

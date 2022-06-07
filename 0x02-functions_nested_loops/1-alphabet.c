#include <stdbool.h>

/**
 * print alphabet in lower case
 * print_alphabet - function that prints lowercase alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;
	int i = 97;
	bool a = true;

	for (i = 97; i <= 122; i++)
	while (a)
	{
		_putchar(i);

		if (i == 122)
		{
			a = false;
		}
		i++;
	}
	_putchar('\n');
}

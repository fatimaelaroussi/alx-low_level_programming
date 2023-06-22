#include "main.h"
/**
  *print_alphabet_x10 - print alphabet in lower case 10 time
  *Return: always 0
  */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

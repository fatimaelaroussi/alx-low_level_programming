#include "main.h"
/**
  *print_diagonal - print diagonal
  * Return: diagonal
  *@n: number of diagonal
  */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}


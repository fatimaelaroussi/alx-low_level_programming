#include "main.h"
/**
  *print_line - print line
  * Return: lines
  *@n: number of lines
  */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
	
}


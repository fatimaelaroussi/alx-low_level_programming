#include "main.h"
/**
  *print_number - print number
  * Return: 0
  *@n: number
  */
void print_number(int n)
{
	unsigned int num;

	num = 0;
	if (n < 0)
	{
		num = num - n;
		_putchar('-');
	}
	else if (num / 10)
	{
		print_number(num / 10);
	}
	else
	{
		num = n;
	}
	_putchar((num % 10) + '0');
}


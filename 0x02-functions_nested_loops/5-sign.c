#include "main.h"
/**
 *print_sign - check the sign
 *@n: charcter
 *Return: 1 if it is positive. 0 for zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

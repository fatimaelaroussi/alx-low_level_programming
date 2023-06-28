#include <stdio.h>
#include <string.h>
#include "main.h"
/**
  *print_rev - returns a string in revers
  *Return: nothing
  *@s: string
 */
void print_rev(char *s)
{
	int i;

	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	 _putchar('\n');
}

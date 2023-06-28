#include <stdio.h>
#include <string.h>
#include "main.h"
/**
  *rev_string - returns a string in revers
  *Return: nothing
  *@s: string
 */
void rev_string(char *s)
{
	int i;
	int j;

	j = 0;
	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		s[j] = s[i];
		j++;
	}
}

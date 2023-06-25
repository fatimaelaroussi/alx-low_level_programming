#include "main.h"
#include <math.h>
/**
  *main - print triangle
  * Return: always 0
  */
int main(void)
{
	long int i;
	long int n;

	n = 612852475143;
	while (n % 2 == 0)
	{
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}

	return (0);
}


#include "main.h"
#include <math.h>
/**
  *main - print triangle
  * Return: always 0
  */
int main(void)
{
	long int i;
	long int max;
	long int n;

	max = 2;
	n = 612852475143;
	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	return (0);
}


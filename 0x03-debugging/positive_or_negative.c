#include "holberton.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%u is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%u is zero\n", i);
	}
}

#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - A function that prints every minutes of the day.
 * @void: int to add
 *
 * Return: 0 (Success)
 */

void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}

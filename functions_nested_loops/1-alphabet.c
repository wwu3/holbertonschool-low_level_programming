#include <stdio.h>
#include "main.h"
/**
* print_alphabet - Entry point
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}

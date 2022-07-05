#include "0-putchar.h"
/**
*
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char *sh = "putchar.c";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}

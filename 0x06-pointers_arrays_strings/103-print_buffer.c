#include "holberton.h"
#include <stdio.h>

 /**
 *print_buffer - Print a buffer 10 bytes per line.
 *@b: Buffer address.
 *@size: Number of characters to be printed.
 */
void print_buffer(char *b, int size)
{
	int i, pi, c;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 9, pi = 0; i < size; i += 10)
		{
			printf("%.8x: ", pi);
			for (c = pi; c <= i ; c++)
			{





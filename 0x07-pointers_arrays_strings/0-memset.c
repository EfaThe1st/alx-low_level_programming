#include "main.h"
/**
 * _memset - Fills a block of memory with a specific value
 * @x: Starting address of memory to be filled
 * @y: Desired value
 * @n: Number of bytes to be changed
 *
 * Return: Changed array with new value for n bytes
 */
char *_memset(char *x, char y, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		x[i] = y;
		n--;
	}
	return (x);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main -returns alphabets except e and q
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char C;

	C = 'a';
	while
		(C <= 'z') {
			if ((C != 'q' && C != 'e') && C <= 'z')
				putchar(C);
			C++;
		}

	putchar('\n');

	return (0);
}

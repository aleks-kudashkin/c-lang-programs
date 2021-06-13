#include <stdio.h>

/* A program that shows that != has bigger priority */
main()
{
	int c;

	while (c = getchar() != EOF)
		putchar('0'+ c);
}

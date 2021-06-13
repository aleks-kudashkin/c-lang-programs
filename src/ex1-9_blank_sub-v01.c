#include<stdio.h>

/* Replace multiple blanks in input by a single one; version 1 */
main()
{
	int c, p;

	while ((c = getchar()) != EOF) {
		putchar((p = c));
		if (c == ' ')
			while ((c = getchar()) == ' ');
		if (c != p)
			putchar(c * (c != EOF));
	}
}

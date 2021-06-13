#include <stdio.h>

/* Replace multiple blanks by a single blank; version 2 */
main()
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar(c);
			while ((c = getchar()) == ' ');
		}
		if (c != EOF)
			putchar(c);
	}
}

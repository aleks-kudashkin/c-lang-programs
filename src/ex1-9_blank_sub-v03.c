#include <stdio.h>

main()
{
	int c, oldc;

	oldc = EOF;
	while ((c = getchar()) != EOF) {
		if (c != ' ')
			putchar(c);
		if (c == ' ')
			if (oldc != ' ')
				putchar(c);
		oldc = c;
	}
}

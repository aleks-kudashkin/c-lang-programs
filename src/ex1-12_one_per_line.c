#include<stdio.h>

#define IN	1
#define OUT 0

/* Print a new line for each word in input */
main()
{
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF) {
		if ((c == ' ' || c == '\t') && state == OUT) {
			putchar('\n');
			state = IN;
		}
		else if (c != ' ' && c != '\t') {
			putchar(c);
			state = OUT;
		}
	}
}

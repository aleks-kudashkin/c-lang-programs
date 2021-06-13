#include<stdio.h>

#define IN 0
#define OUT 1

/* A program that shows tabs as \t, backspace(if you can type it) as \b
 * and backslashes as \\. PS: Yes, i did abuse the () */
main()
{
	int c, escaped;

	while ((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t" + (escaped = IN));
		if (c == '\b')
			printf("\\b" + (escaped = IN));
		if (c == '\\')
			printf("\\\\" + (escaped = IN));
		putchar(c * escaped);
		escaped = OUT;
	}
}

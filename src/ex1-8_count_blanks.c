#include <stdio.h>

/* Count blanks, tabs and newlines in input */
main()
{
	int c, nb, nt, nl;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++nb;
		if (c == '\t')
			++nt;
		if (c == '\n')
			++nl;
	}
	printf("nb = %d, nt = %d & nl = %d", nb, nt, nl);
}

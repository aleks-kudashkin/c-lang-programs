#include <stdio.h>

#define MAX	9
#define MIN	1


main()
{
	int c, i, j;
	int length[MAX - MIN];

	for (i = MIN; i <= MAX; ++i)
		length[i] = 0;

	j = 0;	
	while ((c = getchar()) != EOF)
		if (c != ' ' && c != '\t' && c != '\n')
			++j;
		else if (j >= MIN && j <= MAX) {
			++length[j];
			j = 0;
		}

	for (i = MIN; i <= MAX; ++i) {
		putchar('0' + i);
		putchar('-');
		putchar('0' + length[i]);
	}
}

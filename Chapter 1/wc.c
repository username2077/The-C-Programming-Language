#include <stdio.h>

#define IN 1
#define OUT 0

main() {
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == '\n' || c == ' ' || c == '\t') {
			state = OUT;
			putchar(c + '\n');
		}
		else if (state == OUT){
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
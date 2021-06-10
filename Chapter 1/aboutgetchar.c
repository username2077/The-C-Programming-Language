#include<stdio.h>

main() {
	//in the windows system ctrl + Z means EOF
	//but the enter key input still be count
	//ctrl + D for what?
	//ctrl + C for what?
	int c, ns, nt, nl, last;
	ns = 0;//space
	nt = 0;//table
	nl = 0;//line
	last = 0;
	//change muti space to single
	while ((c = getchar()) != EOF){
		if (c == ' ')
			++ns;
		if (c == '\t')
			++nt;
		if (c == '\n')
			++nl;
		if (c != ' ')
			putchar(c);
		if (c == ' ')
			if (!last)
				putchar(c), last = 1;
	}
	printf("space = %d; table = %d; line = %d\n", ns, nt, nl);
}
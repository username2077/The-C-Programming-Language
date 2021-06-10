#include <stdio.h>

main() {
	int c;
	c = (getchar() != EOF);
	printf("%d\n", c);
	printf("%d", EOF);
}
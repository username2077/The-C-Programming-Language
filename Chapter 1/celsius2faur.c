#include <stdio.h>

main() {
	float celsius, fahr;
	int lower, upper, step;
	lower = 0;
	upper = 100;
	step = 10;
	celsius = lower;
	while(celsius <= upper) {
		fahr = 9.0 / 5.0 * celsius + 32.0;
		printf("%3.0f   %6.2f\n", celsius, fahr);
		celsius += step;
	}
}
// use function change fahr to celsius
#include <stdio.h>

float fahr2celsius(float fahr);

main(){
	float fahr;
	for (fahr = 0; fahr < 300; fahr += 20)
		printf("%f %f\n", fahr, fahr2celsius(fahr));
	return 0;
}

float fahr2celsius(float fahr){
	float celsius;
	celsius = 5.0 / 9.0 * (fahr - 32.0);
	return celsius;
}
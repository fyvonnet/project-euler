#include <stdio.h>

int main()
{
	int sumsquare = 0;
	int squaresum = 0;
	int i;

	for (i = 1; i <= 100; i++) {
		sumsquare += (i * i);
		squaresum += i;
	}

	squaresum *= squaresum;

	printf("%d\n", squaresum - sumsquare);

	return 0;
}

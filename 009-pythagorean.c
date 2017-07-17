#include <stdio.h>

int main()
{
	int m, n;
	int a, b, c;

	for (n = 1; n < 20; n++)
		for (m = n + 1; m <= 20; m++) {
			a = (m * m) - (n * n);
			b = 2 * m * n;
			c = (m * m) + (n * n);
			if (a + b + c == 1000) {
				printf("a=%d, b=%d, c=%d, a*b*c=%d\n", a, b, c, a*b*c);
				return 0;
			}
		}
	return 0;

}

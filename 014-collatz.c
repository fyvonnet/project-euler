#include <stdio.h>

int main(void)
{
	long long i, n, mn;
	int count, mcount = 0;

	for (i = 1; i < 1000000; i++) {
		n = i;
		count = 1;
		while (n != 1) {
			count++;
			if (n % 2 == 0)
				n /= 2;
			else
				n = (3 * n) + 1;
		}
		if (mcount < count) {
			mcount = count;
			mn = i;
		}
	}

	printf("%lld (%d)\n", mn, mcount);

	return 0;
}

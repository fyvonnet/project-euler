#include <stdio.h>
#include <limits.h>

int main()
{
	unsigned long long nb = 0;
	int div;
	int flag = 0;

	while (!flag && nb < ULLONG_MAX) {
		nb++;
		flag = 1;
		div = 2;
		while (div <= 20 && flag) {
			if (nb % div)
				flag = 0;
			div++;
		}
	}

	printf("%lld\n", nb);

	return 0;
}

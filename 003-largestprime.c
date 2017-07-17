#include <stdio.h>
#include <inttypes.h>

int main()
{
	long long nb = 600851475143;
	long long i;

	for (i = 2; i <= nb; i++) {
		while (nb % i == 0) {
			nb /= i;
			printf("%lld ", i);
		}
	}
	printf("\n");

	return 0;
}

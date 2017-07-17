#include <stdio.h>

int main()
{
	int primes[10001];
	int nprimes = 0;
	int nb;
	int i, isprime;

	for (nb = 2; nprimes < 10001; nb++) {
		isprime = 1;
		for (i = 0; (i < nprimes) && isprime; i++)
			if (!(nb % primes[i]))
				isprime = 0;

		if (isprime) {
			primes[nprimes++] = nb;
			printf("%d: %d\n", nprimes, nb);
		}
	}

	return 0;
}

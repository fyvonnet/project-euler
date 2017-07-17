#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <gmp.h>

int *sieve(int limit)
{
	unsigned long i, j, k = 0;
	bool *isprime;
	int *primes = malloc(1);;

	isprime = calloc((limit + 1), sizeof(bool));

	for (i = 0; i < limit; i++)
		isprime[i] = true;

	for(i = 2; i < limit; i++)
		if(isprime[i]) {
			primes = realloc(primes, (k + 1) * sizeof(int));
			primes[k++] = i;
			for(j = (i * i); j < limit; j += i)
				isprime[j] = false;
		}

	primes = realloc(primes, (k + 1) * sizeof(int));
	primes[k] = 0;

	free(isprime);
	return primes;
}

int main(void)
{
	unsigned long i;
	int *primes = sieve(2000000);
	mpz_t sum, prime;

	mpz_init_set_ui(sum, 0);

	for (i = 0; primes[i]; i++) 
		printf("%d ", primes[i]);
	printf("\n");

	for (i = 0; primes[i]; i++) {
		mpz_init_set_ui(prime, primes[i]);
		mpz_add(sum, sum, prime);
	}

	gmp_printf("%Zd\n", sum);

	exit(EXIT_SUCCESS);
}

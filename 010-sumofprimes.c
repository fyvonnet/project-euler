#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

int main()
{
	unsigned long i, j;
	uint8_t *isprime;
	unsigned long long sum = 0;
	const int true = 1, false = 0;
	const long limit = 2000000;

	isprime = calloc((limit + 1), sizeof(uint8_t));

	for (i = 0; i <= limit; i++)
		isprime[i] = true;

	for(i = 2; (i * i) <= limit; i++)
		if(isprime[i])
			for(j = (i * i); j <= limit; j += i)
				isprime[j] = false;

	for (i = 2; i <= limit; i++)
		if (isprime[i])
			sum +=i;

	printf("%lld\n", sum);
	return 0;
}

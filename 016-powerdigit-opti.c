#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	uint8_t *pwr;
	int carry, prod;
	int ndigit;
	int sum;
	int i, j;

	pwr = malloc(1);
	pwr[0] = 1;
	ndigit = 1;

	for (i = 1; i <= 1000; i++) {
		carry = 0;
		for (j = 0; j < ndigit ; j++) {
			prod = carry + (2 * pwr[j]);
			pwr[j] = prod % 10;
			carry = prod / 10;
		}
		if (carry) {
			pwr = realloc(pwr, ++ndigit);
			pwr[ndigit - 1] = carry;
		}
	}

	sum = 0;
	for (i = 0; i < ndigit; i++)
		sum += pwr[i];
	printf("%d\n", sum);

	return 0;
}

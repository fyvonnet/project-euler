#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	uint64_t i, j;
	uint64_t trinum = 0;
	int nbdiv = 0;

	for (i = 1; nbdiv < 500; i++) {
		trinum += i;
		nbdiv = 0;
		for (j = 1; j*j <= trinum; j++)
			if (trinum % j == 0)
				nbdiv+=2;
	}

	printf("%" PRIu64 "\n", trinum);

	return 0;
}

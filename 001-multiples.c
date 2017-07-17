#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1000; i++)
		if ((i % 3 == 0) || (i % 5 == 0)) {
			printf("%d ", i);
			sum += i;
		}

	printf("\n=> %d\n", sum);

	return 0;
}

#include <stdio.h>

#define SIZE	5

int main()
{
	unsigned long long matrix[SIZE + 1][SIZE + 1];
	int i, j;

	matrix[0][0] = 1;
	for (i = 1; i <= SIZE; i++) {
		matrix[i][0] = 1;
		for (j = 1; j < i; j++)
			matrix[i][j] = matrix[i - 1][j] + matrix[i][j - 1];
		matrix[i][i] = 2 * matrix[i][i - 1];
	}

	printf("%llu\n", matrix[SIZE][SIZE]);

	return 0;
}

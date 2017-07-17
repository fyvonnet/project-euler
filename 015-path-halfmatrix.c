#include <stdlib.h>
#include <stdio.h>

typedef unsigned long long ull_t;

ull_t path (int size)
{
	ull_t **matrix;
	int i, j;

	matrix = malloc((size + 1) * sizeof(ull_t));
	matrix[0] = malloc(sizeof(ull_t));
	matrix[0][0] = 1;

	for (i = 1; i <= size; i++) {
		matrix[i] = malloc((i + 1) * sizeof(ull_t));
		matrix[i][0] = 1;
		for (j = 1; j < i; j++)
			matrix[i][j] = matrix[i - 1][j] + matrix[i][j - 1];
		matrix[i][i] = 2 * matrix[i][i - 1];
	}

	return matrix[size][size];
}

int main(void)
{
	int i;

	for (i = 0; i<=20; i++)
		printf("%2i: %12llu\n", i, path(i));
	return 0;
}

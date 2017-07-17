#include <stdio.h>

void path(int x, int y, unsigned long long *nb)
{
	if (x == 0 && y == 0) {
		(*nb)++;
		return;
	}

	if (x >  0)
		path(x - 1, y, nb);

	if (y > 0) 
		path(x, y - 1, nb);
}

int main(void)
{
	unsigned long long n = 0;
	const int size = 15;

	path(size, size, &n);
	printf("%llu\n", n);

	return 0;
}

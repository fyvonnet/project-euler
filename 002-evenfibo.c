#include <stdio.h>

int main(void)
{
	int a = 1; 
	int b = 2;
	int sum = 0;
	int tmp;

	while (a < 4000000) {
		if (a % 2 == 0)
			sum += a;
		tmp = a;
		a = b;
		b += tmp;
	}
	printf("%d\n", sum);

	return 0;
}

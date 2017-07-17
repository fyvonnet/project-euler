#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *multtwo(const char *bigint)
{
	int i, j;
	int l, rl;
	int prod, carry;
	char *result;
	int *prods;

	l = rl = strlen(bigint);

	for (i = 0; bigint[i] == '0'; i++)
		rl--;

	prods = malloc(rl * sizeof(int));

	carry = 0;
	j = rl - 1;
	for (i = l - 1; i >= (l - rl); i--) {
		prod = carry + (2 * (bigint[i] - '0'));
		carry = prod / 10;
		prods[j--] = prod % 10;
	}

	result = malloc((size_t) (rl + carry + 1));

	if (carry)
		result[0] = '1';

	for (i = 0; i < rl; i++)
		result[i + carry] = prods[i] + '0';
	result[rl + carry] = '\0';

	free(prods);
	return result;
}

char *powtwo(int pow)
{
	int i;
	char *res;
	char *r;

	res = malloc(2 * sizeof(char));
	strcat(res, "1");

	for (i = 1; i <= pow; i++) {
		r = multtwo(res);
		free(res);
		res = r;
	}

	return res;
}

int sumstring(char *string)
{
	int sum = 0;
	int i;

	for (i = 0; i < strlen(string); i++)
		sum += string[i] - '0';

	return sum;
}


int main(void)
{
	char *result;
	int i = 1000;

	result = powtwo(i);
	printf("%i\n", sumstring(result));

	return 0;
}

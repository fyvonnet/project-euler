#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *int2str(int nb)
{
	char *buffer = malloc(200);
	char hun[50];
	int u, d, h;

	const char *units[] = {"", "one","two","three","four","five","six",\
		"seven","eight", "nine", "ten", "eleven", "twelve", "thirteen",\
		"fourteen", "fifteen", "sixteen", "seventeen", "eighteen", \
		"nineteen" };

	const char *dozens[] = {"","","twenty","thirty","forty","fifty","sixty",\
		"seventy","eighty","ninety"};

	if (nb == 1000) {
		sprintf(buffer,"onethousand");
		return buffer;
	}

	u = nb % 10;
	d = (nb / 10) % 10;
	h = (nb / 100);
	sprintf(hun, "");

	if (h > 0) {
		sprintf(hun, "%shundred", units[h]);
		if (d || u)
			strcat(hun, "and");
	}
	if (nb % 100 < 20)
		sprintf(buffer, "%s%s", hun, units[nb % 100]);
	else
		sprintf(buffer, "%s%s%s", hun, dozens[d], units[u]);

	return buffer;
}

int main(void)
{
	int i;
	int sum = 0;
	char *string;

	for (i = 1; i <= 1000; i++) {
		string = int2str(i);
		//printf(">%s<\n", string);
		sum += strlen(string);
		free(string);
	}

	printf("%i\n", sum);

	return 0;
}


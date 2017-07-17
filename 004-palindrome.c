#include <stdio.h>
#include <string.h>

int main()
{
	char snb[5];
	int snbl, fpal, nb, nmax = 0;
	int i, j , k;


	for(i = 1; i <= 999; i++)
		for (j = i + 1; j <= 999; j++) {
			fpal = 1;
			nb = i * j;
			sprintf(snb, "%d", nb);
			snbl = strlen(snb);
	 
			for (k = 0; k < snbl / 2; k++)
				if (snb[k] != snb[snbl - k - 1])
					fpal = 0;

			if (fpal && nb > nmax)
				nmax = nb;
		}

	printf("%d\n", nmax);
	return 0;
}

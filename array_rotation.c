#include <stdio.h>

int main() {
	int T, n[100], a[200][100], i, j, temp, d, k;
	scanf("%d", &T);
	for (i=0; i < T; i++)
	{
		scanf("%d", &n[i]);
		for (j = 0; j < n[i]; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < T; i++)
	{
		d = 1;
		while (n[i] > 0)
		{
			for (j = 1; j < n[i]; j++)
			{
				temp = a[i][n[i] - 1];
				a[i][j] = a[i][j - 1];
				a[i][0] = temp;
			}
			k = n[i] - d;
			if (k > 0)
			{
				for (; k < n[i] - 1; k++)
					a[i][k] = a[i][k + 1];
			}
			else
			{
				for (k = 0; k < n[i] - 1; k++)
					a[i][k] = a[i][k + 1];
			}
			n[i]--;
			d++;
		}
	}
	return 0;
}
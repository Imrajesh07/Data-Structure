#include <stdio.h>

int main() {
	int T, n[100], a[200][100], i, j, temp, d, k, l;
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
			temp = a[i][n[i] - 1];
			for (j = n[i] -1; j > 0; j--)
			{
				a[i][j] = a[i][j - 1];
			}
			a[i][0] = temp;
			k = n[i] - d;
			if (k > 0)
			{
				for (; k < n[i] - 1; k++)
					a[i][k] = a[i][k + 1];
			}
			else
			{
				for (l = 0; l < n[i] - 1; l++)
					a[i][l] = a[i][l + 1];
			}
			n[i]--;
			d++;
		}
	}
	for (int i = 0; i < T; ++i)
	{
		printf("%d\n", a[i][0]);
	}
	return 0;
}
#include <stdio.h>

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		gcd(b, a % b);
	}
}

void array_rotation(int a[], int d, int n)
{
	int hcf = gcd(n, d);
	int temp, j;
	for (int i = 0; i < hcf; ++i)
	{
		temp = a[n - i - 1];
		for (j = n - i - 1; j >= d; j = j - d)
		{
			a[j] = a[j - d];
		}
		a[j] = temp;
	}
}

int main()
{
	int n, a[100], d;
	scanf("%d", &n);
	scanf("%d", &d);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}
	array_rotation(a, d, n);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
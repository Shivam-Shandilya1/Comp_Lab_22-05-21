#include <stdio.h>
void pythagoreanTriplets(int limit)
{
    int a, b, c = 0;
	int m = 2;
	while (c < limit) {
		for (int n = 1; n < m; ++n) {
			a = m * m - n * n;
			b = 2 * m * n;
			c = m * m + n * n;

			if (c > limit)
				break;
if(a<b&&b<c&&a<c)
{
 printf("%d %d %d\n", a, b, c);
}
if(b<a&&b<c&&a<c)
{
    printf("%d %d %d\n", b, a, c);
}

		}
		m++;
	}
}

int main()
{
	int limit;
	printf("Enter Number: ");
	scanf("%d",&limit);
	pythagoreanTriplets(limit);
	return 0;
}


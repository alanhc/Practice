#include <stdio.h>

int test_Geometric_progression(long x, long y)
{
	if (x == 0) return 0;
	if (y == 0) return 0;
	int xmody = x%y;
	if (x == 1) return 1;
	if (test_Geometric_progression(x/y, y) && !xmody) 
		return 1;
	return 0;
}

int print_Geometric_progression(long x, long y)
{
	printf("%ld ", x);
	int xmody = x%y;
	if (x == 1) return 1;
	if (x == 0) return 0;
	if (print_Geometric_progression(x/y, y) && !xmody) 
		return 1;
	return 0;
}


int main()
{
	long n, m;
	while (scanf("%ld%ld", &n, &m) == 2) {
		if (test_Geometric_progression(n, m)) {
			print_Geometric_progression(n, m);
			printf("\n");
		} else {
			printf("Boring!\n");
		}
	}
}

#include <stdio.h>

int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int a, b, sum = 0;
		scanf("%d\n%d", &a, &b);
		if (!(a % 2)) a++;
		for (int j = a; j <= b; j+=2) {
			sum += j;
		}
		printf("Case %d: %d\n", i+1, sum);
	}
	
}

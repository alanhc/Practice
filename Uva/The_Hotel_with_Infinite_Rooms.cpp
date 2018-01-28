#include <stdio.h>
int main()
{
	long S = 0;
	long long D = 0;
	while (scanf("%ld%lld", &S, &D) != EOF) {
		while (D > S) {
			D -= S;
			S++;
		}
		printf("%d\n", S);
	}
}


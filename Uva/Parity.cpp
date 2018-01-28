#include <stdio.h>

int Bit_solution(int x) {
	int sum_1s = 0;
	unsigned int mask = ( 1 << (sizeof(int)*8 -1) );
	bool leading_zero = true;
	for (; mask; mask >>=1) {
		if (x & mask) {
			leading_zero = false;
			sum_1s++;
		}
		if (!leading_zero)
			printf("%d", (x & mask)? 1:0);
	}
	return sum_1s;
}

int main()
{
	int n, sum_1s;
	do {
		scanf("%d", &n);
		if (n == 0) break;
		printf("The parity of ");
		sum_1s = Bit_solution(n);
		printf(" is %d (mod 2).\n", sum_1s);
	} while (n!=0);
}


/*
int Recursion_solution(int x) {
	int sum_1s = 0;
	if (x/2 == 0) {
		printf("1");
		return 1;
	}
	sum_1s = (Recursion_solution(x/2)+(x%2));
	printf("%d", x%2);
	return sum_1s;
}

int main()
{
	int n;
	while (scanf("%d", &n) && n!=0) {
		int sum_1s;
		printf("The parity of ");
		sum_1s = Recursion_solution(n);
		printf(" is %d (mod 2).\n", sum_1s);
	}
}
*/

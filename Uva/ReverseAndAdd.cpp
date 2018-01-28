#include <stdio.h>

int Reverse(int x)
{
	int mod = 0, Rnum = 0;
	while (x != 0) {
		mod = x % 10;
		Rnum = Rnum * 10 + mod; 
		x /= 10;
	}
	return Rnum;
}


int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int num, reverse, sum, count = 0;
		scanf("%d", &num);
		sum = num;
		do {
			count++;
			reverse = Reverse(sum);
			sum += reverse;
		} while (sum != Reverse(sum));
		printf("%d %d\n", count, sum);
	}
}

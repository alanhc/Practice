#include <stdio.h>

int sum_digits(int x) {
	int sum = 0;
	while (x > 0) {
		sum += ((x % 10)*(x % 10));
		x /= 10;
	}
	return sum;
}

int check_happy(int x,const int input, int recheck) {
	//printf("now:%d**\n", x);
	if (x == 1) return 1;
	if ((x == input) && (recheck > 0)) return 0;
	recheck++;
	//printf("==%d==\n", recheck);
	printf("%d ", x);
	return check_happy(sum_digits(x), input, recheck);
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int input;
		int recheck = 0;
		scanf("%d", &input);
		if (check_happy(input ,input, recheck))
			printf("Case #%d: %d is a Happy number.\n", i+1, input);
		else
			printf("Case #%d: %d is an Unhappy number.\n", i+1, input);
		
	}
}

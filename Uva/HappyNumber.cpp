#include <stdio.h>

int sum_digits(int x) {
	int sum = 0;
	while (x > 0) {
		sum += ((x % 10)*(x % 10));
		x /= 10;
	}
	return sum;
}

// return 0 if the given 'x' never input before, the function will record the value
//          until a match
// return 1 if the given 'x' has been input before
int ReCheck(int x) {
	static int data[100];
	static int len = 0;
	if (x == 1) {
		// special case for clearing the len
		len = 0;
		return 0;
	}
	for (int i = 0; i < len; i++) {
		if (data[i] == x) {
			len = 0;
			return 1;
		}
	}
	data[len++] = x;
	return 0;
}

int check_happy(int x, int level) {
	if (x == 1) {
		ReCheck(1);
		return 1;
	}
	if (ReCheck(x))
		return 0;
	// check if Unlimited call (Diverging sequence)
	if (level > 10000)
		return 0;
	return check_happy(sum_digits(x), ++level);
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int input, level = 0;
		scanf("%d", &input);
		if (check_happy(input, level))
			printf("Case #%d: %d is a Happy number.\n", i+1, input);
		else
			printf("Case #%d: %d is an Unhappy number.\n", i+1, input);

	}
}

#include <stdio.h>

int reverse(int x) {
	int num = 0, mod;
	while (x != 0) {
		mod = x % 10;
		num = (num*10) + mod;
		x /= 10;
	}
	return num;
}

int Prime(int x) {
	if (x == 1) return 0;
	if (x == 0) return 0;
	for (int i = 2; i < x; i++) {
		if (!(x%i)) return 0;
	}
	return 1;
}

int main()
{
	int input;
	while (scanf("%d", &input) != EOF) {
		if (Prime(input)) {
			if (Prime(reverse(input)) && 
			(reverse(input) != input))
				printf("%d is emirp.\n", input);
			else
				printf("%d is prime.\n", input);
		} else {
			printf("%d is not prime.\n", input);
		}
			
	}
}

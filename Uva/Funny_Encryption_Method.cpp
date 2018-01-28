#include <stdio.h>

int HowMany1(int x)
{
	int count = 0;
	while (x != 0) {
		if (x & 1) 
			count++;
		x >>= 1;
	}
	return count;
 }

int Hx_HowMany1(int x)
{
	int count = 0;
	int a[4] = {0};
	
	
	int bit = 0,
		  i = 0;
	while (x != 0) {
		a[i++] = x % 10;
		bit++;
		x /= 10;
	}
	
	
	for (i = 0; i < bit; i++) {
		count += HowMany1(a[i]);
	}
	
	return count;
}

int main()
{
		int N;
		int M;
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%d", &M);
			int b1 = HowMany1(M);
			int b2 = Hx_HowMany1(M);
			printf("%d %d\n", b1, b2);
		}
		
}

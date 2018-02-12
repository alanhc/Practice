#include <stdio.h>
#include <math.h>
//bn = k^n-1



int main()
{
	int n;
	scanf("%d", &n);
	int bn = 0, ans = 0;
	for (int i = 1; 
		bn <= n;
		i++) {
		
		bn = ( pow(2, i-1) )*( pow(2, i)-1 );
		if (!(n % bn)) ans = bn;
	}
	printf("%d", ans);
}

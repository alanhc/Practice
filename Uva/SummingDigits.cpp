
#include <stdio.h>

void printAns(long long int n) {
	int sum=0;
	while (n) {
		sum+=n%10;
		n/=10;
	}
	if (sum/10) printAns(sum);
	else printf("%d\n", sum);
}

int main()
{
	long long int num;
	while (scanf("%lld", &num)==1) {
		if (num==0) break;
		else printAns(num);
	}

}

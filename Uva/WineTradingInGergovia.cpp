#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	while (scanf("%d", &n)==1) {
		if (n==0)break;
		int a[100000];
		for (int i=0; i<n; i++) {
			scanf("%d", &a[i]);
		}
		long long int ans=0;
		for (int i=0; i<n; i++) {
			ans+=abs(a[i]);
			a[i+1]=a[i]+a[i+1];
		}
		printf("%lld\n", ans);
	}
}
//³g¤ßªk

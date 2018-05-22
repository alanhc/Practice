
#include <stdio.h>
#include <stdlib.h>

int dict[1005];

int findClose(int find, int n)
{
	int ans;
	int min=1e9;
	for (int i=0; i<n-1;i++) {
		for (int j=i+1; j<n;j++) {
			int now=(dict[i]+dict[j]);
			int d = abs(find-now);
			//printf("**now:%d, %d\n", now, d);
			if (min>d) {
				min=d;
				ans=now;
			}
			//printf("min:%d\n", min);
		}
	}
	return ans;
}

int main()
{
	int n, c=1;
	while (scanf("%d", &n)==1) {
		if (n==0) break;
		for (int i=0; i<n; i++) {
			scanf("%d", &dict[i]);
		}
		int m, find;
		printf("Case %d:\n", c++);
		scanf("%d", &m);
		for (int i=1; i<=m; i++) {
			scanf("%d", &find);
			printf("Closest sum to %d is %d.\n", find, findClose(find,n));
		}
	}

}

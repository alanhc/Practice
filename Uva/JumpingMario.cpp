
#include <stdio.h>

int main()
{
	int c;
	scanf("%d", &c);
	for (int i=1; i<=c; i++) {
		int high=0, low=0;
		int t, pre, now;
		scanf("%d", &t);
		scanf("%d", &pre);
		while (--t) {
			scanf("%d", &now);
			if (now>pre) high++;
			else if (now<pre) low++;
			pre=now;
		}
		printf("Case %d: %d %d\n", i, high, low);
	}
}

#include <stdio.h>

int main()
{
	printf("Lumberjacks:\n");
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		int a=0,b=0,d=0;
		scanf("%d%d", &a, &b);
		d=b-a;
		int now, pre=b;
		int order=1;
		for (int j=2; j<10; j++) {
			scanf("%d", &now);
			int d1=now-pre;
			pre=now;
			if (d*d1<0) order=0;
			//printf("\n%d,%d\n", d, d1);
		}
		printf((order)?"Ordered\n":"Unordered\n");
	}
}

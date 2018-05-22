#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c;
	int t=1;
	int a[105];
	while (scanf("%d", &c)==1) {
		if (c==0) break;
		int sum=0;
		for (int i=0; i<c; i++) {
			scanf("%d", &a[i]);
			sum+=a[i];
		}
		int adv=sum/c;
		int ans=0;
		//printf("%d\n", adv);
		for (int i=0; i<c; i++) {
			int d=adv-a[i];
			ans-=(d<0)?d:0;
		}
		printf("Set #%d\nThe minimum number of moves is %d.\n\n", t, ans);
		t++;
	}
}

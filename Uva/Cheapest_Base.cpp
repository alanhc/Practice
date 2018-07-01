#include <stdio.h>

int cost[36];
int tcase[100];
int main()
{
	int c;
	scanf("%d", &c);
	for (int i=0; i<c; i++) {
		printf("Case %d\n",i+1);
		for (int j=0; j<36; j++) {
			scanf("%d", &cost[j]);
		}
		int t;
		scanf("%d", &t);
		
		for (int j=0; j<t; j++) {
			int num;
			scanf("%d", &num);
			printf("Cheapest base(s) for number %d: ", num);
			//print ans
			
			int min=1e9;
			int baseCost[36];
			for (int k=2; k<37; k++) {
				int sum=0;
				int n=num;
				while (n) {
					sum+=cost[n%k];
					n/=k;
				}
				baseCost[k-2]=sum;
				if (min>sum) min=sum;
			}
			
			//printf("min:%d\n", min);
			/*
			for (int k=0; k<36; k++) {
				printf("%d ", baseCost[k]);
			}*/
			for (int k=2; k<37; k++) {
				if (baseCost[k-2]==min) printf("%d ", k);
			}
			
			printf("\n");
		} printf("\n");
	}
}

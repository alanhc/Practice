#include <stdio.h>
#include <algorithm>

using namespace std;
int a[100];
int check[100];
int main()
{
	int n, q ,t=1;
	while (scanf("%d%d", &n, &q)==2) {
		if (!(n||q)) break;
		for (int i=0; i<n; i++) {
			scanf("%d", &a[i]);
		}
		sort(&a[0], &a[n]);
		printf("CASE# %d:\n", t++);
		for (int i=0; i<q; i++) { //check
			bool found=false;
			int num;
			scanf("%d", &num);
			int index=0;
			for(;index<n;index++) {
				if (num==a[index]) {
					printf("%d found at %d\n", num, index+1);
					found=true;
					break;
				}
			}
			if (!found) printf("%d not found\n", num);
		}
	}
}

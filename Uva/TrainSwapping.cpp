#include <stdio.h>
#include <algorithm>
using namespace std;


int main()
{
	int n, c;
	int a[100];
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &c);
		for (int i=0; i<c; i++) {
			scanf("%d", &a[i]);
		}
		int count=0;
		for (int i=c-1; i>=0; i--) {
			for (int j=0; j<i; j++) {
				if (a[j]>a[j+1]) {
					swap(a[j],a[j+1]);
					count++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", count);
	}
}

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n--) {
		int c;
		scanf("%d", &c);
		int max=-1e9, min=1e9;
		int in;
		for (int i=0; i<c; i++) {
			scanf("%d", &in);
			if (in<min) min=in;
			if (in>max) max=in;
		}
		printf("%d", (max-min)*2);
		puts("");
	}
}

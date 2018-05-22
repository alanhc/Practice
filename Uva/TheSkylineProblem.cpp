
/* read 8.37 8.44
 * think -8.47
 * write -9.25
 * change method 10.
 */
#include <stdio.h>

int coordinate[10002];
int main()
{
	int l,h,r;
	int start=1e9, end=-1;
	while (scanf("%d%d%d", &l, &h, &r)==3) {
		for (int i=l; i<r; i++) {
			if (h>coordinate[i]) coordinate[i]=h;
		}
		if (start>l) start=l;
		if (end<r) end=r;
	}
	int height=0;
	bool space = false;
	for (int i=start; i<=end; i++) {
		if (height !=coordinate[i]) {
			if (space) printf(" ");
			printf("%d %d", i, coordinate[i]);
		}
		height =coordinate[i];
		space = true;
	}
	puts("");
}

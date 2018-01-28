#include <stdio.h>
#define min(x, y) ((x) < (y)? (x) : (y))
#define max(x, y) ((x) > (y)? (x) : (y))


typedef struct position{
	int x,
		y;
}position;

int main()
{
	int n;
	scanf("%d", &n);
	for (int night = 1; night <= n; night++) {
		position a, b, c, d;
		int i, j, k, l;
		scanf("%d %d %d %d", &a.x, &a.y, &b.x, &b.y);
		scanf("%d %d %d %d", &c.x, &c.y, &d.x, &d.y);
		i = max(a.x, c.x), j = max(a.y, c.y);
		k = min(b.x, d.x), l = min(b.y, d.y);
		
		int A = (b.x - a.x)*(b.y - a.y);
		int B = (d.x - c.x)*(d.x - c.x);
		int C = (i-k)*(j-l);
		printf("Night %d:", night);
		if (i >= k || j >=l) {
			printf("0 %d %d\n", A+B, 10000-A-B);
		} else 
			printf("%d %d %d\n", C, A+B-(2*C), 10000-A-B+C);
	}
}

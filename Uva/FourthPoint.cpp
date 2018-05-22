#include <stdio.h>

typedef struct pos {
	double x;
	double y;
} pos;
//¦V¶q¹Bºâ
int main()
{
	pos a[4];
	while (scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &a[0].x, &a[0].y, &a[1].x, &a[1].y, &a[2].x, &a[2].y, &a[3].x	, &a[3].y)==8) {
		if (a[0].x==a[2].x && a[0].y==a[2].y) printf("%.3f %.3f\n", (a[1].x+a[3].x)-a[0].x, (a[1].y+a[3].y)-a[0].y);
		else if (a[1].x==a[2].x && a[1].y==a[2].y) printf("%.3f %.3f\n", (a[0].x+a[3].x)-a[1].x, (a[0].y+a[3].y)-a[1].y);
		else if (a[0].x==a[3].x && a[0].y==a[3].y)printf("%.3f %.3f\n", (a[2].x+a[1].x)-a[3].x, (a[2].y+a[1].y)-a[3].y);
		else printf("%.3lf %.3lf\n", (a[2].x+a[0].x)-a[1].x, (a[2].y+a[0].y)-a[1].y);
	}
}

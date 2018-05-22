#include <stdio.h>
#include <math.h>
int main()
{
	int h,m;
	double hAngle, mAngle;
	while (scanf("%d:%d\n", &h, &m)==2) {
		if ( !(h||m) ) break;
		hAngle = (h+m/60.0)*30;
		mAngle = m*6.0;
		double ans = hAngle-mAngle;
		ans = fabs(ans);
		printf("%.3f\n", (ans>180)?360-ans:ans);
	}
}

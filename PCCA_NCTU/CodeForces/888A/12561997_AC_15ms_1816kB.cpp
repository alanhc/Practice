#include <stdio.h>


int main()
{
	int n;
	scanf("%d", &n);
	int data[1001];
	int extreme = 0;
	for (int i = 0; i < n; i++) {
		int in;
		scanf("%d", &in);
		data[i] = in;
		if (i >= 2) {
			if (data[i-2] < data[i-1] && data[i-1] > in)  extreme++;
			if (data[i-2] > data[i-1] && data[i-1] < in)  extreme++;
		}
	}
	printf("%d", extreme);
}

#include <stdio.h>

int h_lady[50000];
int lower(int mid) {
	int *p = &h_lady[mid];
	int count = 0;
	while (*p == h_lady[mid]) {
		p--;
		count++;
	}
	return mid-count;
}
int upper(int mid) {
	int *p = &h_lady[mid];
	int count = 0;
	while (*p == h_lady[mid]) {
		p++;
		count++;
	}
	return mid+count;
}


void Binary_Search(int start, int end, int find) {
	
	while (end - start > 1) {
		int mid = (start+end)/2;
		if (h_lady[mid] == find){
			start = lower(mid);
			end = upper(mid);
			break;
		} else if (h_lady[mid] > find){
			end = mid;
		} else {
			start = mid;
		}
	}
	if ( h_lady[start] && h_lady[end] && find > h_lady[start])
		printf("%d %d\n", h_lady[start], h_lady[end]);
	else {
		if (h_lady[start]) printf("%d X\n", h_lady[start]);
		else printf("X %d\n", h_lady[end]);
	}
}

int main()
{
	int n, q;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &h_lady[i]);
	}
	scanf("%d", &q);
	for (int i = 0; i < q; i++) {
		int in;
		scanf("%d", &in);
		Binary_Search(0, n, in);
	}
	
}

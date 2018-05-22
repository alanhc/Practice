#include <stdio.h>
#include <vector>

using namespace std;
int composite[1100];
int prime_list[1000];

vector<int> vprime_list;
void create_prime() {
	composite[1] = 0;
	vprime_list.push_back(1);
	for (int i = 2; i <= 1100; i++) {
		if (composite[i] == 1) continue;
		else {
			vprime_list.push_back(i);
			for (int j = i+i; j <= 1100; j+=i) {
				composite[j] = 1;
			}
		}
	}
	for (int i = 1; i <= 1000; i++) {
		if (vprime_list[i]) prime_list[i] = vprime_list[i-1];
	}
	vprime_list.clear();
	//Debug
	/*
	for (int i = 0; i <=200; i++) {
		 printf(" %d ", prime_list[i]);
	}
	printf("\n");*/
}

int count(int n) {
	int count = 0;
	for (int i = 1; prime_list[i] <= n; i++) {
		count++;
	}
	return count;
}

int main()
{
	create_prime();
	int n, c;
	while (scanf("%d%d", &n, &c) == 2) {
		printf("%d %d:", n, c);
		int range = count(n);
		//printf("\nr:%d\n", range);
		int start;
		int end;
		if (range%2) {
			start = range/2+1 - (c*2-1)/2;
			end   = range/2+1 + (c*2-1)/2;
			if (c > range/2) { end = range; start = 1; }

			//printf("%d %d\n", start, end);
			for (int i = start; i <= end; i++) {
				printf(" %d", prime_list[i]);
			}
		} else {
			start = range/2 - (c*2-2)/2;
			end = range/2+1 + (c*2-2)/2;
			//printf("%d %d\n", start, end);
			if (c > range/2) { end = range; start = 1; }
			for (int i = start; i <= end; i++) {
				printf(" %d", prime_list[i]);
			}
		}
		printf("\n\n");
	}
}

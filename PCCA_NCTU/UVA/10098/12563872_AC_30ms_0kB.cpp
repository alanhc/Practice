#include <stdio.h>
#include <vector>
#include <algorithm> 

using namespace std;
vector<int> arr;
void printAll() { 
    sort(arr.begin(),arr.end());
    do{
        for(unsigned int i=0; i<arr.size(); ++i)
            printf("%c",arr[i]);
        puts("");
    } while(next_permutation(arr.begin(),arr.end()));
    arr.clear();
}

int main() {
	int n;
	char blank;
	scanf("%d", &n);
	scanf("%c", &blank);
	for (int i = 0; i < n; i++) {
		char cin;
		int vin;
		while (scanf("%c", &cin) != EOF && cin != '\n') {
			vin = cin;
			arr.push_back(vin);
		}
		printAll();
		printf("\n");
	}
	
}

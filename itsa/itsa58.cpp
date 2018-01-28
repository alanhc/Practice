#include <stdio.h>


int compare( int smaller[], int  bigger[])
{
	printf("hello");
}

int main()
{
	int m;
	scanf("%d", &m);
	int smaller[1000], bigger[1000];
	for ( int i = 0; i < m; i++ ) {
		int n;
		scanf("%d", &n);
		
		// clear arrays
		int j = 0;
		while ( j < 1000 ) { 
			smaller[i] = 9999;
			bigger[i] = 0;
			i++;
		}
		
		
		
		for ( int j = 0; j < n; j++ ) {
			scanf("%d%d", &smaller[i], &bigger[i]);
			compare( &smaller[i], &bigger[i] );
		}	
	}
}

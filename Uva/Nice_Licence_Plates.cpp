#include <stdio.h>
#include <stdlib.h>

int nice (char buffer[]) {
	int x = 0, y = 0;
	x = (buffer[0]-'A')*26*26 + (buffer[1]-'A')*26 + (buffer[2]-'A');
	y = (buffer[4] - '0')*1000 + (buffer[5] - '0')*100 + (buffer[6] - '0')*10 + (buffer[7] - '0');
	return (abs(x-y) < 100)? 1:0;
}

int main()
{
	int n;
	char word[9];
	scanf("%d", &n);
	for (int c = 0; c < n; c++) {
		scanf("%s", word);
		if ( nice(word) ) printf("nice\n");
		else printf("not nice\n");
	}
}

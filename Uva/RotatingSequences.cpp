

#include <stdio.h>
#include <string.h>

char word[105][105];
int main()
{
	char i=0;
	int max=0;
	while (fgets(word[i],105,stdin)!=NULL) {
		int len=strlen(word[i]);
		word[i][len-1]=' ';
		max=(max<len)?len:max;
		i++;
	}
	//printf("%d,%d\n", max,i);
	for (char r=0; r<max-1; r++) {
		for (char c=i-1;c>=0;c--) {
			if (word[c][r]==NULL) printf(" ");
			else printf("%c", word[c][r]);
		}
		printf("\n");
	}
}

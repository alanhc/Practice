
#include <stdio.h>
#include <string.h>

int main()
{
	int c;
	char word[100];
	char check[100];
	scanf("%d", &c);
	bool first=true;
	while (c--) {
		scanf(" %s", word);
	//	puts(word);
		int len=strlen(word);
		for (int i=1; i<=len; i++) {
			int flag=1;
			for (int j=0; j<len; j++) {
				if (word[j]!=word[(i+j)%len]) {
					flag=0;
					break;
				}
			}
			if (flag) {
				printf((first)?"%d\n":"\n%d\n", i);
				break;
			}
		}
		first=false;
	}
}

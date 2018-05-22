#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char buffer[128];
	while (scanf("%d%s", &n, buffer)==2) {
		if (n==0) break;
		int group=strlen(buffer)/n;
		for (int i=0; i<strlen(buffer); i+=group) {
			for (int j=group-1; j>=0; j--) {
				printf("%c",buffer[i+j]);
			}
		}
		puts("");
	}
}

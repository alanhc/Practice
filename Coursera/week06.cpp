#include <stdio.h>
#include <string.h>
char skip[4][10] = {"of", "and", "the", "at"};

int main()
{
	char now[128];
	while (scanf("%s", now) == 1) {
		int flag = 0;
		for (int i = 0; i < 4; i++) {
			if (strcmp(now, skip[i]) == 0) {
					flag = 1;
			}
		}
		if (flag == 1) continue;
		printf("%c", now[0] - 'a' + 'A');
		if (strstr(now, ".") != NULL) printf(" ");
	}
	
}

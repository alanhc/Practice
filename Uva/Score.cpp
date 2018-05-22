#include <stdio.h>

int main()
{
	int c;
	scanf("%d\n", &c);
	while (c--) {
		int score=0;
		char in;
		int add=1;
		while (scanf("%c", &in)==1) {
			if (in=='\n') break;
			if (in=='O') score+=add++;
			if (in=='X') add=1;
			//printf("add:%d\n", add);
		}
		add=1;
		printf("%d\n", score);
	}
}

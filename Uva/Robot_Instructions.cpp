#include <stdio.h>

char s[10];
char instruction[101];

int run_instruction(int index)
{
	char temp[3];
	int find_step;
	scanf("%s", s);
	if (s[0] =='L')
		instruction[index] = -1;
	else if (s[0] =='R')
		instruction[index] = 1;
	else { 
		scanf("%s %d", temp, &find_step);
		instruction[index] = instruction[find_step-1];
	}
	return instruction[index];
}

int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int n = 0;
		scanf("%d", &n);
		int position = 0;
		for (int i = 0; i < n; i++) {
				position += run_instruction(i);
		}
		printf("%d\n", position);
	}
}

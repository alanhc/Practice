#include <stdio.h>

int main()
{
	int input;
	while (scanf("%d", &input) != EOF) {
		int level_Max = 0, level = 0;
		for (int i = 1; level_Max < input; i++) {
			level_Max += i;
			level++;
		}
		int x, y;
		if (level %2)
			x = (level_Max - input) + 1;
		else
			x = (level + (input - level_Max));
		y = (level+1) - x;
		printf("TERM %d IS %d/%d\n", input, x, y);

	}
}



#include <stdio.h>
#include <ctype.h>


int main()
{
	char buffer[128];

	while (fgets(buffer, 128, stdin)!= NULL) {
		int i = 0, sum = 0;
		bool wordstart = true;
		while (buffer[i] != '\n') {
			if (isalpha( buffer[i] ) && wordstart) {
				sum++;
				wordstart = false;
			}
			if (!isalpha( buffer[i] )) {
				wordstart = true;
			}
			i++;
		}
		printf("%d\n", sum);
	}
}

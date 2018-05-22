#include <stdio.h>
#include <string.h>
#include <ctype.h>

char line[128];
char mir[] = "A000300HIL0JM0O0002TUVMXY51SE0Z0080";
int main()
{
	while ( fgets(line, 128, stdin) != NULL ) {
		int len = strlen(line);
		len--;
		line[len] = '\0';
		bool palindrome = true, mirrored = true;
		printf("%s", line);
		for (int i = 0; i <= len/2; i++) {
			if (line[i] != line[len-i-1]) palindrome = false;
			//printf("%c, %c\n", line[i], mir[ line[i]-'1'+26 ] );
			if (isupper(line[len-i-1]) && (line[i] != mir[ line[len-i-1]-'A' ])) mirrored = false;
			if (isdigit(line[len-i-1]) && (line[i] != mir[ line[len-i-1]-'1'+26 ])) mirrored = false;
			//printf("\n%c,%c\n", line[i],mir[ line[len-i-1]-'1'+26 ]);
			//printf("\n%d, %d\n", palindrome, mirrored);
		}
		if (palindrome && mirrored) puts(" -- is a mirrored palindrome.\n");
		else if (palindrome) puts(" -- is a regular palindrome.\n");
		else if (mirrored) puts(" -- is a mirrored string.\n");
		else puts(" -- is not a palindrome.\n");
		//printf("\n");
		//printf("%d\n", len);
	}
}

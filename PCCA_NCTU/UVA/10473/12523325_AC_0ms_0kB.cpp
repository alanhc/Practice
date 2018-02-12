#include <stdio.h>
#include <string.h>

int degree(int x, int n) {
	int ans = 1;
	while (n--) {
		ans*=x;
	}
	return ans;
}

void hex_int(char buffer[]) {
	int ans;
	strcpy(buffer, buffer+2);
	sscanf(buffer,"%X", &ans);
	printf("%d\n", ans);
}

void int_hex(char buffer[]) {
	int ans;
	sscanf(buffer,"%d", &ans);
	printf("0x%X\n", ans);
}

int main()
{
	while (1) {
		char buffer[33];
		scanf("%s", buffer);
		if (buffer[0] != '-') {
			if (buffer[1] == 'x')
				hex_int(buffer);
			else {
				int_hex(buffer);
			}
		}
		else break;
	}
}

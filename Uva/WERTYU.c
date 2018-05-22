

#include <stdio.h>
#include <string.h>

int main()
{
	char d[]=" `1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	char buffer[128];
	char hash[128];
	for (int i=0; i<strlen(d);i++) {
		hash[d[i]]=d[i-1];
	}
	while (fgets(buffer, 128, stdin)!=NULL) {
		int len=strlen(buffer);
		len--;
		for (int i=0; i<=len; i++) {
			if (buffer[i]==' ') {
				printf(" ");
				continue;
			}
			if (buffer[i]=='\n') {
				printf("\n");
				break;
			}
			printf("%c", hash[buffer[i]]);
		}
	}

}

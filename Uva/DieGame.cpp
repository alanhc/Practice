/*
 * read 3.05
 *
 *
 * */
#include <stdio.h>

int main()
{
	int c;
	char cmd[20];
	while (scanf("%d", &c)) {
		if (c==0) break;
		int t=1, n=2, w=3,u=6, s=5, e=4, temp;
		while (c--) {
			scanf("%s", cmd);
			//puts(cmd);
			switch (cmd[0])
			{
				case 'n': temp=t;t=s;s=u;u=n;n=temp;break;
				case 's': temp=t;t=n;n=u;u=s;s=temp;break;
				case 'e': temp=t;t=w;w=u;u=e;e=temp;break;
				case 'w': temp=t;t=e;e=u;u=w;w=temp;break;
				default: break;
			}
			//printf("top:%d\n", t);
		}
		printf("%d\n", t);
	}
}

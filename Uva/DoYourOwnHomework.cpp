#include <stdio.h>
#include <string.h>

typedef struct dictionary {
	char subject[21];
	int days;
} dict;

dict homework[30];

int main()
{
	int T;

	scanf("%d", &T);
	for (int c = 1; c <= T; c++) {
		int N;
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%s %d", homework[i].subject, &homework[i].days);
		}
		int qDay;
		char qSubject[21];
		scanf("%d %s", &qDay, qSubject);
		bool find = false;
		for (int i = 0; i < N; i++) {
			if (strcmp(homework[i].subject, qSubject) == 0) {
				find = true;
				if (qDay >= homework[i].days) printf("Case %d: Yesss\n", c);
				else if ((qDay+5) >= homework[i].days) printf("Case %d: Late\n", c);
				else printf("Case %d: Do your own homework!\n", c);
			}
			else continue;
		}
		if (!find) printf("Case %d: Do your own homework!\n", c);
	}
}

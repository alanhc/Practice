#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;
char dict[1005][21];
char sortDict[1005][21];
char word[21];
void check(char word[], int c)
{
	printf("Anagrams for: %s\n", word);
	bool find=false;
	int index=1;
	for (int i=0; i<c; i++) {
		int len=strlen(word);
		char check[21];
		strcpy(check,word);
		sort(check, check+len);
		if (strcmp(check, sortDict[i])==0) {
			find=true;
			printf("  %d) %s\n", index, dict[i]);
			index++;
		}
	}
	if (!find) printf("No anagrams for: %s\n", word);
}

int main()
{
	int t,c;
	scanf("%d", &t);
	bool first=true;
	while (t--) {
		if (!first) printf("\n");
		fgets(word,21,stdin);
		scanf("%d", &c);
		//printf("%d,%d\n", t,c);
		for (int i=0; i<c; i++) {
			scanf("%s", dict[i]);
			strcpy(sortDict[i],dict[i]);
			int len=strlen(dict[i]);
			sort(sortDict[i], sortDict[i]+len);
		}
		while (scanf("%s", word)==1) {
			if (strcmp(word, "END")==0) break;
			//puts(word);
			check(word, c);
		}
		first=false;
	}
}


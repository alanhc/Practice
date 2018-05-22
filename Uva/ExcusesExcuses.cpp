
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char keyword[256][25];
char line[256][128];
char buffer[128];
char bufferKeywords[25];

int main()
{
	int k, e;
	int tcase=1;
	while (scanf("%d%d", &k, &e)==2) {
		for (char c=0; c<k; c++) {
			scanf("%s", keyword[c]);
		}
		fgets(line[0], 128, stdin);
		for (char c=0; c<e; c++) {
			fgets(line[c], 128, stdin);
		}
		//tolower
		for (char c=0; c<e; c++) {
			//tolower
			strcpy(buffer,line[c]);
			for (int i=0; buffer[i]!='\n'; i++) {
				if (isupper(buffer[i])) buffer[i]=buffer[i]-'A'+'a';
				if (!isalpha(buffer[i])) buffer[i]=' ';
			}
			//HMkeywords
			char *pch;
			pch = strtok (buffer," ");
			char count=0;
		    while (pch != NULL)
		    {
		      for (char i=0; i<k; i++) {
		      	if (strcmp(pch, keyword[i])==0) count++;
		      }
		      pch = strtok (NULL, " ");
		    }
		    bufferKeywords[c]=count;
		}
		//find max keywords
		int maxKeywords=-1;
		for (int i=0; i<e; i++) {
			maxKeywords=(maxKeywords<bufferKeywords[i])?
						bufferKeywords[i]:maxKeywords;
		}
		//printf("%d\n", maxKeywords);
		printf("Excuse Set #%d\n", tcase);
		//serach word contain max keywords
		for (int i=0; i<e; i++) {
			if (bufferKeywords[i]==maxKeywords) printf("%s", line[i]);
		}
		printf("\n");
		tcase++;
	}

}

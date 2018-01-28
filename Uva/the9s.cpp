#include <stdio.h>
#include <string.h>

int isum_digits(char str[], int len) {
	int  sum = 0;
	for (int i = 0; i < len; i++) {
		sum += str[i] - '0';
	}
	return sum;
}

int degree = 1;
int multiple_of_9(char str[], int len) {
	int iSumD = 0;
	iSumD = isum_digits(str, len);
	//printf("iSumD:%d\n",iSumD);
	char sTemp[6];
	len = sprintf(sTemp,"%d", iSumD);
	//printf("len:%d\n",len);
	if (iSumD == 9) {
		return 1;
	}
	if (iSumD % 9) {
		return 0;
	}
	else {
		degree++;
		return multiple_of_9(sTemp, len);
	}
}

int main()
{
	char str[1000];
	while (scanf("%s", str) != EOF) {
		int len = strlen(str);
		if (str[0] == '0' && len == 1) break;
		if (multiple_of_9(str, len)) printf("%s is a multiple of 9 and has 9-degree %d.\n", str, degree);
		else printf("%s  is not a multiple of 9.\n", str);
		degree = 1;
	}
}


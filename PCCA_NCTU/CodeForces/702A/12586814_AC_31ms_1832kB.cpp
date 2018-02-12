#include <stdio.h>
#include <algorithm>
using namespace std;
 
int main() {
    int n, pRead, cRead;
    scanf("%d",  &n);
    int cLength = 0;
    int mLength = 0;
    scanf("%d", &pRead);
    for (int i = 1; i < n; i++) {
        scanf("%d", &cRead);
        if (pRead < cRead) {
            cLength++;
            mLength = max(cLength, mLength);
        }
        else {
            cLength = 0;
        }
        pRead = cRead;
    }
    printf("%d", mLength + 1);
    return 0;
}

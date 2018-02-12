#include <stdio.h>
#include <vector>

using namespace std;

inline long long f(long long x){ return 2*x; }
inline long long g(long long x){ return 10*x+1; }

vector<long long> stk;
int dfs(long long u, long long v)
{
    stk.push_back(u);
    if(u==v){
        printf("YES\n");
        int df = stk.size();
        printf("%d\n", df);
        for(unsigned int i=0;i<stk.size();++i)
            printf("%lld ",stk[i]);
        return 1;
    } else if(u<v){
        int k = 0;
        k = dfs(f(u),v);
        if (k) return 1;
        k = dfs(g(u),v);
        if (k) return 1;
    }
    stk.pop_back();
    return 0;
}


int main()
{
	long long a, b;
	scanf("%lld%lld", &a, &b);
	int size = 0;
	size = dfs(a, b);
	if (!size) printf("NO");
}

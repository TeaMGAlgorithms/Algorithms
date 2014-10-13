#include <bits/stdc++.h>
#define MAXN 10001
using namespace std;
vector<int> primes;
bool mark[MAXN];
void sieve(int limit)
{
    if(limit>=2)primes.push_back(2);
    for(int i=3;i<=limit;i+=2)
    {
        if(!mark[i])
        {
            primes.push_back(i);
            if(i<=sqrt(limit)+1)for(int j=i*i;j<=limit;j+=i)mark[j]=true;
        }
    }
}
int main()
{
    sieve(100);
    for(int i=0;i<primes.size();i++)printf("%d ",primes[i]);
    printf("\n");
    return 0;
}

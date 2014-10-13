#include <bits/stdc++.h>
#define MAXN 10001
using namespace std;
vector<int> primes;
bool mark[MAXN];
int pow(int x,int y,int mod)
{
    if(y==1)return x%mod;
    if(y&1)return (x*pow((x*x)%mod,y/2,mod))%mod;
    else return pow((x*x)%mod,y/2,mod)%mod;
}
int main()
{
    printf("%d\n",pow(3,5,10000));
    return 0;
}

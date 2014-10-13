#include <bits/stdc++.h>
#define MAXN 10001
using namespace std;
struct node
{
    vector<int> adj;
};
node graf[MAXN];
bool mark[MAXN];
void DFS(int src)
{
    printf("Posecujem cvor: %d\n",src);
    mark[src]=true;
    for(int i=0;i<graf[src].adj.size();i++)if(!mark[graf[src].adj[i]])DFS(graf[src].adj[i]);
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    while(m--)
    {
        int u,v;
        scanf("%d%d",&u,&v);
        graf[u].adj.push_back(v);
        graf[v].adj.push_back(u);
    }
    DFS(0);
    return 0;
}

#include <bits/stdc++.h>
#define MAXN 10001
using namespace std;
struct node
{
    vector<int> adj;
};
node graf[MAXN];
bool mark[MAXN];

void BFS(int src)
{
    queue<int> qu;
    qu.push(src);
    while(!qu.empty())
    {
        int cur=qu.front();
        qu.pop();
        mark[cur]=true;
        printf("Posecujem cvor: %d\n",cur);
        for(int i=0;i<graf[cur].adj.size();i++)
        {
            if(!mark[graf[cur].adj[i]])
            {
                qu.push(graf[cur].adj[i]);
                mark[graf[cur].adj[i]]=true;
            }
        }
    }

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
    BFS(0);
    return 0;
}

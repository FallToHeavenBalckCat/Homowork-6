//染色法判断二分图bfs()
#include<cstring>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;

typedef pair<int,int> PII;
const int N=100010,M=200010;
int color[N];
int e[M],ne[M],h[N],idx;
int n,m;

void add(int a,int b)
{
    e[idx]=b;
    ne[idx]=h[a];
    h[a]=idx++;
}

bool bfs(int u,int c)
{
    queue<PII> q;
    q.push({u,c});
    color[u]=c;

    while(q.size())
    {
        auto t=q.front();
        q.pop();

        int ver=t.first,clr=t.second;
        for(int i=h[ver];i!=-1;i=ne[i])
        {
            int j=e[i];
            if(!color[j]) 
            {
                q.push({j,3-clr});
                color[j]=3-clr;
            }
            else if(color[j]==clr) return false;
        }
    }
    return true;
}

int main()
{
    scanf("%d%d",&n,&m);
    memset(h,-1,sizeof h);
    
    while(m--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        add(a,b),add(b,a);
    }
    
    bool flag=true;

    for(int i=1;i<=n;i++)
    {
        bfs(i,1);
        if(!bfs(i,1))
        {
            flag=false;
            break;
        }
    }

    if(flag) puts("Yes");
    else puts("No");

    return 0;

}
//有边数限制的最短路Bell-ford算法
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N=510,M=10010;
int dist[N];
int last[N];//存储上次的距离，
struct Edge{
    int a,b,x;
}edges[M];
int n,m,k;


void bell_ford()
{
    memset(dist,0x3f,sizeof dist);
    dist[1]=0;
    
    for(int i=0;i<k;i++)
    {
        memcpy(last,dist,sizeof dist);
        for(int j=0;j<m;j++)
        {
            auto e=edges[j];
            dist[e.b]=min(dist[e.b],last[e.a]+e.x);
        }
    }
}

int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
    {
        int a,b,x;
        scanf("%d%d%d",&a,&b,&x);
        edges[i]={a,b,x};
    }

    bell_ford();
    if(dist[n]>0x3f3f3f3f/2) puts("impossible");
    else cout<<dist[n]<<endl;
    
    return 0;
}
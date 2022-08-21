//spfa求最短路
#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;

const int N=1e5+10;
int e[N],w[N],ne[N],h[N],idx;
int n,m,dist[N];
bool st[N];

void add(int a,int b,int x)
{
    e[idx]=b;
    w[idx]=x;
    ne[idx]=h[a];
    h[a]=idx++;
}

int spfa()
{
    memset(dist,0x3f,sizeof dist);
    dist[1]=0;
    
    queue<int> q;
    q.push(1);
    st[1]=true;

    while(q.size())
    {
        auto t=q.front();
        q.pop();
        st[t]=false;

        for(int i=h[t];i!=-1;i=ne[i])
        {
            int j=e[i];
            if(dist[j]>dist[t]+w[i])
            {
                dist[j]=dist[t]+w[i];
                if(!st[j]) 
                {
                    q.push(j);
                    st[j]=true;
                }
            }
        }
    }
    if(dist[n]==0x3f3f3f3f) return 0;
    else return dist[n];
}

int main()
{
    cin>>n>>m;
    memset(h,-1,sizeof h);

    while(m--){
        int a,b,x;
        scanf("%d%d%d",&a,&b,&x);
        add(a,b,x);
    }

    if(!spfa())  cout<<"impossible"<<endl;
    else cout<<spfa()<<endl;
    return 0;

}
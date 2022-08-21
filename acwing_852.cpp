//spfa判断是否存在负权边
#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;

const int N=1e5+10;
int e[N],w[N],ne[N],h[N],idx;
int n,m,dist[N];
bool st[N];
int cnt[N];//表示点N到出发点的边数，如果这个边数是大于等于N的说明当前的路径是存在回路的

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
    //因为存在环的路径不一定是从1开始的，所以要遍历所有的点（以不同的点作为出发点)
    for(int i=1;i<=n;i++)
    {
        st[i]=true;
        q.push(i);
    }

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
                cnt[j]=cnt[t]+1;
                if(cnt[j]>=n) return true;
                if(!st[j]) 
                {
                    q.push(j);
                    st[j]=true;
                }
            }
        }
    }
    return false;
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

    if(!spfa())  cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;

}
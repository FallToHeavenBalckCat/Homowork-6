//匈牙利算法
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N=510,M=100010;
int h[N],e[M],ne[M],idx;
int n1,n2,m;
int match[N];
bool st[N];
int res;

void add(int a,int b)
{
    e[idx]=b;
    ne[idx]=h[a];
    h[a]=idx++;
}

bool find(int x)
{
    for(int i=h[x];i!=-1;i=ne[i])
    {
        int j=e[i];
        if(!st[j])
        {
            st[j]=true;
            if(match[j]==0 || find(match[j]) )
            {
                match[j]=x;
                return true;
            }
        }
    }
    return false;

}

int main()
{
    scanf("%d%d%d",&n1,&n2,&m);
    memset(h,-1,sizeof h);

    while(m--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        add(a,b);
    }

    for(int i=1;i<=n1;i++)
    {
        memset(st,false,sizeof st);
        if(find(i)) res++;
    }

    cout<<res<<endl;
    return 0;
    
}

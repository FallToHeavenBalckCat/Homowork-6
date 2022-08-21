#include<iostream>
#include<cstring>
#include<algorithm>
#include<unordered_map>
using namespace std;

const int N=1<<18;
int cnt[N];

int main()
{
    int t;
    cin>>t;
    while(t--){
        char  op[2],str[20];
        scanf("%s%s",op,str);
        int x=0;
        for(int i=0;str[i];i++)
        {
            x=x*2+str[i]%2;
        }
        if(*op=='+') cnt[x]++;
        else if(*op=='-'&&cnt[x]>1) cnt[x]--;
        else cout<<cnt[x]<<endl;
    }
    return 0;
}
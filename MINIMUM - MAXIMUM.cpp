#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,r) for(ll i=a;i<=r;i++)
int main()
{
    ll m,s;
    cin>>m>>s;
    ll lon[105]={0},be[105]={0};
    ll s1=s;
    ll k;
    f(i,1,m)
    {
        if(s1>=9)
        {
            lon[i]=9;
            s1-=9;
            k=i;
        }
        else if(s1<9&&s1>0)
        {
            lon[i]=s1;
            s1=0;
            k=i;
        }
        else break;
    }
    f(i,1,m)
    {
        be[i]=lon[m+1-i];
    }
    if(be[1]==0)
    {
        be[1]=1;
        be[m+1-k]--;
    }
    f(i,1,m) cout<<be[i];
    cout<<' ';
    f(i,1,m) cout<<lon[i];
}


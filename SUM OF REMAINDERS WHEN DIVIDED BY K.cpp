#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;i++)
ll ucln(ll a,ll b)
{
    ll c;
    if(a<b)
    {
        c=a;
        a=b;
        b=c;
    }
    while(1)
    {
        c=a%b;
        if(c==0) return b;
        a=b;
        b=c;
    }
}
int main()
{
    ll n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        ll d=0;
        f(i,1,a)
        {
            d+=i;
            if(d>b) break;
        }
        if(d==b) cout<<1<<endl;
        else cout<<0<<endl;
    }
}

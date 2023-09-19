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
    ll n,a,x,y;
    cin>>n;
    while(n--)
    {
        cin>>a>>x>>y;
        ll c=ucln(x,y);
        f(i,0,c-1) cout<<a;
        cout<<endl;
    }
}

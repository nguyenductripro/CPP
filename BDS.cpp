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
    ll a,x,y;
    cin>>a;
    while(a--)
    {
        cin>>x>>y;
        ll x1,y1;
        ll c1=ucln(x,y);
        x1=x/c1;
        y1=y/c1;
        while(x1%2==0) x1/=2;
        while(x1%3==0) x1/=3;
        while(y1%2==0) y1/=2;
        while(y1%3==0) y1/=3;
        if(x1==y1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

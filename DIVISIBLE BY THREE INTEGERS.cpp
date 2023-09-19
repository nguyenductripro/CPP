#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;i++)
ll minn(ll n)
{
    ll k=1;
    f(i,1,n-1)
    {
        k*=10;
    }
    return k;
}
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
    ll a,x,y,z,n;
    cin>>a;
    while(a--)
    {
        cin>>x>>y>>z>>n;
        ll k=minn(n);
        ll ma=(k-1)*10+9;
        ll h=x*y/ucln(x,y);
        ll m=h*z/ucln(h,z);
        ll j=k/m;
        if(k%m!=0) k=m*(j+1);
        if(k<=ma) cout<<k<<endl;
        else cout<<"-1"<<endl;
    }
}

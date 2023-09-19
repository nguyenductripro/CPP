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
    ll n,m,t,a[100025],tich,mu;
    ll mod=1e9+7;

    cin>>t;
    while(t--)
    {
        ll x, x1;
        tich=1;
        cin>>n;
        f(i,0,n-1) cin>>a[i];
        x1=ucln(a[0],a[1]);
        f(i,0,n-1)
        {
            x1=ucln(x1,a[i]);
        }
        f(i,0,n-1)
        {
            tich=((tich%mod)*(a[i]%mod))%mod;
        }
        tich%=mod;
        mu=1;
        f(i,1,x1)
        {
            mu=((mu%mod)*(tich%mod))%mod;
        }
        cout<<mu<<endl;
    }
}

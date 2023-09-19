#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;i++)
ll mu(ll a,ll b)
{
    ll x=1;
    f(i,0,b-1) {x*=a;
    x=x%1000000007;
    }
    return x;
}
int main()
{
    ll n,a,b[100005],x;
    cin>>a;
    while(a--)
    {
        cin>>n>>x;
        for(ll i=n-1;i>=0;i--) cin>>b[i];
        ll tong=0;
        for(ll i=n-1;i>=0;i--)
        {
            tong=tong+b[i]*mu(x,i);
            tong=tong%1000000007;
        }
        cout<<tong<<endl;
    }
}


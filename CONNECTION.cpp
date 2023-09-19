#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, a, b) for(ll i=a;i<=b;i++)
ll mod=1e9+7;
int main()
{
    ll a;
    cin>>a;
    ll b=a/2;
    ll tich=1;
    ll c[505];
    f(i, 1,500)
    {
        c[i]=0;
    }
    c[0]=1;
    c[1]=1;
    f(j, 2,b)
    {
  f(i,0,(j-1))
        {
            
            c[j]+=(c[i]*c[j-i-1])%mod ;
            c[j]%=mod;
            
        }
    }
    cout<<c[b];
    return 0;
}

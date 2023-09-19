#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ll a,b,tong=0;
    cin>>a>>b;
    f(i,a,b)
    {
        ll j=sqrt(i);
        if(i==j*j) tong+=i;
    }
    printf("%lld",tong);
}

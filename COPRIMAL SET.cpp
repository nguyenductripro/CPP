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
    ll n,m,t,sum,sl,sb;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        sum=n*(n+1)/2;
        if((sum+m)%2==1) cout<<"No\n";
        else if(m==1) cout<<"No\n";
        else{
            sl=(sum+m)/2;
            sb=sl-m;
            if(ucln(sl,sb)==1) cout<<"Yes\n";
            else{
                cout<<"No\n";
            }
        }
    }
}


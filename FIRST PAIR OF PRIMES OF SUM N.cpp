#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;i++)
ll nt(ll a)
{
    ll b=sqrt(a);
    if(a<2) return 0;
    else{
        f(i,2,b)
        {
            if(a%i==0) return 0;
        }
    }
    return 1;
}
int main()
{
    ll a,b,dem,check;
    cin>>a;
    while(a--)
    {
        cin>>b;
        ll c=b/2;
        ll k=-1;
        f(i,2,c)
        {
            if(nt(i)==1&&nt(b-i)==1){ k=i;break;}
        }
        if(k==-1) cout<<k<<endl;
        else cout<<k<<" "<<b-k<<endl;
    }
}

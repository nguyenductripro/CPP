#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;i++)
#define F(i,a,b) for(ll i=a;i>=b;i--)
bool cmp( ll a, ll b)
{
    return a>b;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,a[100025];
        cin>>n>>k;
        f(i,1,n) cin>>a[i];
        sort(a+1,a+n+1,cmp);
        ll dem=0;
        ll m=n;
        f(i,1,n)
        {
            if(a[i]<k/2) break;
            else{
                F(j,m,i+1)
                {
                    if(a[i]+a[j]>=k)
                    {
                        dem+=j-i;
                        m=j;
                        break;
                    }
                }
            }
        }
        cout<<dem<<endl;
    }
}


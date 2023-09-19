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
    //freopen("in.inp","r",stdin);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,a[105][105];
        cin>>n>>m;
        f(i,1,n){
            f(j,1,m) cin>>a[i][j];
        }
        ll a1=1;
        while(1)
        {
            f(i,a1,m-1) cout<<a[a1][i]<<' ';
            f(i,a1,n) cout<<a[i][m]<<' ';
            F(i,m-1,a1+1) cout<<a[n][i]<<' ';
            F(i,n,a1+1) cout<<a[i][a1]<<' ';

            a1++;
            m--;
            n--;
            if(m==1||n==1) break;
        }
        cout<<endl;
    }
}


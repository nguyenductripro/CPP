#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,r) for(ll i=a;i<=r;i++)
int main()
{
    ll t,n,a[120][120],sum[120];
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll tong=0;
        f(i,1,n)
        {
            f(j,1,n)
            {
                cin>>a[i][j];
                tong+=a[i][j];
            }
        }
        ll maxx=0;
        f(i,1,n)
        {
            sum[i]=0;
            f(j,1,n)
            {
                sum[i]+=a[i][j];
            }
            if(sum[i]>maxx) maxx=sum[i];
        }
        f(j,1,n)
        {
            sum[j]=0;
            f(i,1,n)
            {
                sum[j]+=a[i][j];
            }
            if(sum[j]>maxx) maxx=sum[j];
        }
        maxx*=n;
        cout<<maxx-tong<<endl;
    }
}

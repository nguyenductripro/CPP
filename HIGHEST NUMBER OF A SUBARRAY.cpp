#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;i++)

int main()
{
    ll t,n,x,b,k,a[200000];
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        f(i,0,n-1) cin>>a[i];
        x=a[0];
        f(i,0,k-1)
        {
            if(a[i]>=x)
            {
                x=a[i];
                b=i;
            }
        }
        cout<<x<<" ";
        f(i,k,n-1)
        {
            if(i<=b+k-1)
            {
                if(a[i]>x) {x=a[i];b=i;}
            }
            else
            {
                x=0;
                for(ll j=i;j>=i-k+1;j--)
                {
                    if(a[j]>x)
                    {
                        x=a[j];
                        b=j;
                    }
                }
            }
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

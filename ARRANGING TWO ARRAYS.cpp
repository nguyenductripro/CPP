#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ll n,m,t,a[10000],b[10000],c[100000],d[100000],l,r,check,bu;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        f(i,0,10000) {c[i]=0;d[i]=0;}
        f(i,0,n-1) {cin>>a[i];c[a[i]]++;}
        f(i,0,m-1) cin>>b[i];
        f(i,0,m-1)
        {
            f(j,0,n-1)
            {
                if(a[j]==b[i]&&c[a[j]]>0)
                {
                    f(k,0,c[a[j]]-1) cout<<a[j]<<" ";
                    c[a[j]]=-1;
                }
            }
        }
        sort(a,a+n);
        f(i,0,n-1)
        {
            if(c[a[i]]>0)  cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}



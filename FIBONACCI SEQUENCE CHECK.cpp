#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ll t,n,a[102],f[25],c[1005];
    cin>>t;
    f(i,0,999) c[i]=0;
    f[0]=0;
    f[1]=1;
    c[0]=1;
    c[1]=1;
    f(i,2,16) {f[i]=f[i-1]+f[i-2];
    c[f[i]]=1;
    }


    while(t--){
        cin>>n;
        f(i,0,n-1) cin>>a[i];
        f(i,0,n-1)
        {
            if(c[a[i]]==1) cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}

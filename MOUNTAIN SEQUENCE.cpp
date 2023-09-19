#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ll n,t,a[100000],l,r,check,bu;
    cin>>t;
    while(t--)
    {
        cin>>n;
        f(i,0,n-1) cin>>a[i];
        cin>>l>>r;
        if(r-l==1) cout<<"Yes"<<endl;
        else{
            check=0;
            bu=1;
            f(i,l,r-1)
            {
                if(a[i]>a[i+1]&&check==0)
                {
                    check=1;
                }
                if(a[i]<a[i+1]&&check==1)
                {
                    bu=0;
                    break;
                }
            }
            if(bu)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}



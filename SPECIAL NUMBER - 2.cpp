#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,r)  for(int i=a;i<=r;i++)
int mu(ll a,ll b)
{
    int c=1;
    f(i,1,b) c*=a;
    return c;
}
int mod= 1e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        ll key=1;
        cin>>n>>k;
        int x=log(k)/log(2);
        f(i,1,x)
        {
            key*=n;
            key%=mod;
        }
        int y=k-mu(2,x);
        x--;
        while(y>0)
        {
            while(1)
            {
                if(y<mu(2,x)) x--;
                else break;
            }
            y-=mu(2,x);
            ll bu=1;
            f(i,1,x)
            {
                bu*=n;
                bu%=mod;
            }
            key+=bu;
            key%=mod;
        }
        cout<<key<<endl;
    }
}

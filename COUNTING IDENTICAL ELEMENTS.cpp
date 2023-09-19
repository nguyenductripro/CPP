#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,r) for(ll i=a;i<=r;i++)
int main()
{
    ll t,n,a[120][120],blck[100025];
    cin>>t;
    while(t--)
    {
        cin>>n;
        f(i,0,100000) blck[i]=0;
        f(i,1,n)
        {
            f(j,1,n)
            {
                cin>>a[i][j];
            }
        }
        f(i,1,n) blck[a[1][i]]=1;
        f(i,2,n)
        {
            f(k,1,n)
            {
                if(blck[a[1][k]]==1){
                ll dem=0;
                f(j,1,n)
                {
                    if(a[1][k]==a[i][j]) {dem++;break;}
                }
                if(dem==0) blck[a[1][k]]=0;
                }
            }
        }
        ll dem=0;
        f(i,0,100005)
        {
            if(blck[i]==1) dem++;
        }
        cout<<dem<<endl;
    }
}

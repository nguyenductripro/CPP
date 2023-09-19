#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,r)  for(ll i=a;i<=r;i++)
int main()
{
    ll t,n,m,a[105][105],b[105][105];
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        f(i,1,n)
        {
            f(j,1,m) {cin>>a[i][j];b[i][j]=a[i][j]; }
        }
        ll k=n/2,h=m/2;

        f(i,1,k)
        {
            f(j,i,n-i)
            {
                a[i][j+1]=b[i][j];
            }
        } //dich  sang trai
        f(i,n-k+1,n)
        {
            f(j,n-i+2,i)
            {
                a[i][j-1]=b[i][j];
            }
        }// dich sang phai
        f(j,1,h)
        {
            f(i,j+1,m+1-j)
            {
                a[i-1][j]=b[i][j];
            }
        } // dich len tren
        f(j,m-h+1,m)
        {
            f(i,m+1-j,j-1) a[i+1][j]=b[i][j];
        } // dich xuong duoi
        f(i,1,n)
        {
            f(j,1,m)
            {
                cout<<a[i][j]<<' ';
            }

        }
        cout<<endl;
    }
}


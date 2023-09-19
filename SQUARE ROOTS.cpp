#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ll a,b;
    cin>>a;
    while(a--)
    {
        cin>>b;
        double tong=1;
        f(i,2,b)
        {
            tong=(double)sqrt(i+tong);
        }
        printf("%.5f\n",tong);
    }
}


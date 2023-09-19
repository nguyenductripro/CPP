#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,r)  for(ll i=a;i<=r;i++)
#define F(i,r,a)  for(ll i=r;i>=a;i--)
int main()
{
    ll t;
    cin>>t;
    getchar();
    while(t--)
    {
        string s;
        char c;
        getline(cin,s);
        ll k=1;
        ll hh;
        F(i,s.length()-1,0)
        {
            if(s[i]<s[i-1])
            {
                k=0;
                hh=i;
                f(j,i,s.length()-1)
                {
                    if(s[j]<s[i-1])
                    {
                        if(s[j]>s[i]) hh=j;
                    }
                    else break;
                }
                c=s[hh];
                s[hh]=s[i-1];
                s[i-1]=c;
                break;
            }
        }
        if(s[0]=='0') s.erase(0,1);
        if(k==1) cout<<"-1"<<endl;
        else cout<<s<<endl;
    }
}


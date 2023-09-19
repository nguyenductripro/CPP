#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,r) for(ll i=a;i<=r;i++)
int main()
{

    ll t;

    cin>>t;
    getchar();
    while(t--)
    {
        string a;
        getline(cin,a);
        a=a.substr(5,6);
        a.replace(3,1,"");
        ll check;
        f(i,0,4)
        {
            if(a[i]==a[0]||a[i]=='6'||a[i]=='8') check=1;
            else{
                check=0;
                break;
            }
        }
        if(check) cout<<"YES\n";
        else{
            if(a[0]==a[1]&&a[0]==a[2]&&a[3]==a[4]) cout<<"YES\n";
            else
            {
                ll check;
                f(i,1,4) {
                    if(a[i]-a[i-1]==1)
                    {
                        check=1;
                    }
                    else
                    {
                        check=0;
                        break;
                    }
                }
                if(check) cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
    }
}


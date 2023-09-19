#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;i++)
#define F(i,a,b) for(ll i=a;i>=b;i--)
string tong(string a,string b)
{
    string c,d;
    string e;
    if(a.length()>b.length())
    {
        c=a;
        d=b;
    }
    else
    {
        c=b;
        d=a;
    }
    while(d.length()<c.length())
    {
        d='0'+d;
    }
    ll h=c.length();
    ll nho=0,cs;
    F(i,h-1,0)
    {
        cs=c[i]+d[i]-2*48+nho;
        if(cs>9) nho=1;
        else nho=0;
        cs%=10;
        e=(char)(cs+'0')+e;
    }
    if(nho==1) e='1'+e;
    //while(e[0]=='0') e.erase(0,1);
    return e;
}
string hieu(string a,string b)
{
    string c,d;
    string e;
    ll f=1;
    if(a.length()>b.length())
    {
        c=a;
        d=b;
    }
    else
    {
        c=b;
        d=a;
        f=0;
    }
    while(d.length()<c.length())
    {
        d='0'+d;
    }
    if(c.compare(d)<0)
    {
        c.swap(d);
        f=0;
    }
    ll h=c.length();
    ll nho=0,cs;
    F(i,h-1,0)
    {
        cs=c[i]-d[i]-nho;
        if(cs<0) {nho=1;cs+=10;}
        else nho=0;
        e=(char)(cs+'0')+e;
    }

    //while(e[0]=='0') e.erase(0,1);
    //if(f==0) e='-'+e;
    return e;
}


string nhan(string a,string b)
{
    string sum="0",c;
    string d[15];
    ll dem=0;
    d[0]="0";
    f(i,1,9)
    {
        d[i]=tong(d[i-1],a);
    }
    F(i,b.length()-1,0)
    {
        if(b[i]=='0'){ dem++; continue;}
        else {
            ll e=b[i]-'0';
        c=d[e];
        f(i,1,dem) c+='0';
        sum=tong(sum,c);
        dem++;}
    }
    return sum;
}

int main()
{
    //freopen("in.inp","r",stdin);
    //ios_base::sync_with_stdio(0);
	//cin.tie(0);
    //cout.tie(0);
    ll t;
    cin>>t;
    getchar();
    while(t--)
    {

        string a,b;
        cin>>a>>b;
        cout<<nhan(a,b)<<endl;
    }
}

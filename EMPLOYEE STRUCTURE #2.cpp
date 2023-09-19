#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;i++)
void chuanhoadate(string &a)
{
    if(a[1]=='/') a='0'+a;
    if(a[4]=='/') a.insert(3,"0");
}
void chuanhoaid(string &a)
{
    while(a.length()<5 ) a='0'+a;
    
}
void chuanhoaten(string &a)
{
    if(a[0]>'Z') a[0]-=32;
    f(i,1,a.length()-1)
    {
        if(a[i]==' ')
        {
        	ll j=i+1;
			while(a[j]==' ' ) a.erase(j,1);
		}
        if(a[i-1]!=' '&&a[i]<'a'&&a[i]!=' ') a[i]+=32;
        else if(a[i-1]==' '&&a[i]>'Z') a[i]-=32;
    }
}

struct Employee{
    string ID;
    string name,sex,birth,address,tax,contract;
    
};
void input(Employee &a)
{

		cin.ignore();
    	getline(cin,a.name);
    	cin>>a.sex>>a.birth;
    	cin.ignore();
    	getline(cin,a.address);
    	cin>>a.tax>>a.contract;
    	
	
}
void printlist(Employee a[],int n)
{
	f(i,0,n-1)
	{
		a[i].ID=to_string(i+1);
		chuanhoaid(a[i].ID);
		//chuanhoaten(a[i].name);
		chuanhoadate(a[i].birth);
		chuanhoadate(a[i].contract);
		cout<<a[i].ID<<' '<<a[i].name<<' '<<a[i].sex<<' '<<a[i].birth<<' '<<a[i].address<<' '<<a[i].tax<<' '<<a[i].contract;
		
		cout<<endl;
	}
}

int main(){
	//freopen("in.inp","r",stdin);
    struct Employee lst[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) input(lst[i]);
    printlist(lst,N);
    return 0;
}

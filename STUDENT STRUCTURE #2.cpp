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
    while(a.length()<3 ) a='0'+a;
    a="B20DCCN"+a;
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

struct Student{
    string ID;
    string name,clas,birth;
    float gpa;
};
void input(Student a[],int n)
{
	f(i,1,n){
		cin.ignore();
    	getline(cin,a[i].name);
    	getline(cin,a[i].clas);
    	getline(cin,a[i].birth);
    	cin>>a[i].gpa;
    	a[i].ID=to_string(i);
	}
}
void print(Student a[],int n)
{
	f(i,1,n)
	{
		chuanhoaid(a[i].ID);
		chuanhoaten(a[i].name);
		chuanhoadate(a[i].birth);
		cout<<a[i].ID<<' '<<a[i].name<<' '<<a[i].clas<<' '<<a[i].birth<<' ';
		printf("%.2f",a[i].gpa);
		cout<<endl;
	}
}

int main(){
	freopen("in.inp","r",stdin);
    struct Student lst[50];
    int N;
    cin >> N;
    input(lst, N);
    print(lst, N);
    return 0;
}

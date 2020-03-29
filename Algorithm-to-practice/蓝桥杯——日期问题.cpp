#include<iostream>
#include<cstdio>
#include<cstring>
#include<set> 
using namespace std;

set<string>st;

int m[2][13]={	0,31,28,31,30,31,30,31,31,30,31,30,31,
				0,31,29,31,30,31,30,31,31,30,31,30,31};
				
void check(int a[])
{
	char s[15];
	int y=a[0]+1900,f=0;
	if(y<1960)
		y+=100;
	if((y%4==0&&y%100!=0)||y%400==0)
		f=1;
	if(0<a[1]&&a[1]<=12)
	{
		if(1<=a[2]&&a[2]<=m[f][a[1]])
		{
			sprintf(s,"%d-%02d-%02d",y,a[1],a[2]);
			if(st.count(s)==0)
				st.insert(s);
		}
	}
}

int main()
{
	int a[3],t;
	scanf("%d/%d/%d",&a[0],&a[1],&a[2]);check(a);
	t=a[0];a[0]=a[2];a[2]=a[1];a[1]=t;check(a);
	t=a[1];a[1]=a[2];a[2]=t;check(a);
	
	for(set<string>::iterator it=st.begin();it!=st.end();it++)
		cout<<*it<<endl;
	
	return 0;
 } 

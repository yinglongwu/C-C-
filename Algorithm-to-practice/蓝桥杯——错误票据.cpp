#include<iostream>
using namespace std;
#include<algorithm>
int a[10005]={0};
int i=0;
int main()
{
	int m,n;
	while(cin>>a[i])
		i++;
		
	int len=i;
	sort(a,a+len); //从小到大排序，舍弃第一个没有用的元素
	
	 
	for(int i=1;i<len;i++)  //判断断号 m
	{
		if(a[i+1]-a[i]>=2)
		{
			m=a[i]+1;
			break;
		}
	}
	for(int i=1;i<len;i++)  //判断重号 n
	{
		if(a[i]==a[i+1])
		{
			n=a[i];
			break;
		}
	}
	
	cout<<m<<" "<<n;
	return 0;
	
 } 

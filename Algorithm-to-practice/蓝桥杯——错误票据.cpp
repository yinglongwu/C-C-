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
	sort(a,a+len); //��С��������������һ��û���õ�Ԫ��
	
	 
	for(int i=1;i<len;i++)  //�ж϶Ϻ� m
	{
		if(a[i+1]-a[i]>=2)
		{
			m=a[i]+1;
			break;
		}
	}
	for(int i=1;i<len;i++)  //�ж��غ� n
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

#include<iostream>
using namespace std;
#include<cmath>
int prime(int a)
{
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		{
			return 0;
			break;
		}
	}
}
int main()
{
	int n,book;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(i==2)
			book=1;
		else if(i==3)
			book=2;
		else
		{
			book=2;
			if(prime(i))
				book++;
		}
	}
	cout<<book;
	return 0;
} 

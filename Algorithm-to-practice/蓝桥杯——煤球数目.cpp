#include<iostream>
using namespace std;
int main()
{
	int a[110];
	a[1]=1;
	for(int i=2;;i++)
	{
		a[i]=a[i-1]+i;
		if(i==100)
			break;
	}
	int sum=0;
	for(int i=1;i<=100;i++)
		sum+=a[i];
	cout<<sum;
	return 0;
}

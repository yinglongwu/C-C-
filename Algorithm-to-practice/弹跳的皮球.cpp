#include<iostream>
using namespace std;
int main()
{
	int n,m,book=0;
	cin>>n; 
	int sum=n;
	while(1)
	{
		m=n/2;
		n=m;
		book++;
		sum=sum+2*m;
		if(n==0)
			break;
	}
	cout<<book<<" "<<sum;
	return 0;
 } 

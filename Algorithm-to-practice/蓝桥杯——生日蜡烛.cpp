#include<iostream>
using namespace std;
int main()
{
	int book=0;
	for(int i=1;i<=100;i++)
	{
		int sum=i;
		if(book==1)
			break;
		for(int j=i+1;j<=100;j++)
		{
			sum=sum+j;
			if(sum==236)
			{
				cout<<i;
				book=1;
				break;	
			}
		}
	}
	return 0;
		
}

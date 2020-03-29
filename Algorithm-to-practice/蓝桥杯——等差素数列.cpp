#include<iostream>
#include<cmath>
using namespace std;
int isPrime(int x)
{
	int book=1;
	if(x==2||x==3)
		return 0;
	else
	{
		int a=sqrt(x);
		for(int i=3;i<=a;i+=2)
		{
			book=0;
			if(x%i==0)
			{
				book=1;
				return 0;
				break;
			}	
		}
	}
	if(book==0)
		return 1;
 } 
int main()
{
	for(int i=100;i<=1000;i++)
	{
		int book=1;
		if(isPrime(i))
		{
			for(int j=1;j<=300;j++)
			{
				for(int x=i+j;;x=i+j*book)
				{
					if(isPrime(x))
						book++;
					else
					{
						book=1;
						break;
					}
					if(book==10)
					{
						cout<<j;
						break;
					}
				}
				if(book==10)
					break;
			}
		}
		if(book==10)
			break;
	}
	return 0;
 } 

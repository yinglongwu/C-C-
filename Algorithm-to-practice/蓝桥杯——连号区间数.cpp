#include<iostream>
using namespace std;
#include<algorithm> 
int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
		cin>>a[i];
	while(prev_permutation(a,a+n))
	{
		
	}
	while(next_permutation(a,a+n))
	{
		
	}
}

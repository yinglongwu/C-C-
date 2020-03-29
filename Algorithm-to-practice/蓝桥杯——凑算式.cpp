#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	double a[9]={1,2,3,4,5,6,7,8,9};
	int book=0;
	while(next_permutation(a,a+9)) //È«ÅÅÁÐº¯Êý 
	{
		double n=a[0]+a[1]/a[2]+(a[3]*100+a[4]*10+a[5])/(a[6]*100+a[7]*10+a[8]);
		if(n==10.000000)
			book++;
	}
	cout<<book;
	return 0;
 } 

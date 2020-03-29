#include<iostream>
#include<algorithm>
# define num 100
using namespace std;
int s[num];
int main()
{
	for(int i=0;i<=2;i++)
		cin>>s[i];
	sort(s,s+3);
	
	int j;
	for(int i=1;;i++)
	{
		j=s[0]*i;
		if(j%s[0]==0&&j%s[1]==0&&j%s[2]==0)
			break;
	}
	cout<<j;
	return 0;
 } 

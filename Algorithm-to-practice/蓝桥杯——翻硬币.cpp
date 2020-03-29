#include<iostream>
using namespace std;
#include<algorithm>
#include<cstring>
char s1[1005];
char s2[1005];
int main()
{
	cin>>s1>>s2;
	int len=strlen(s1);
	int count=0;
	for(int i=0;i<len;i++)
	{
		if(s1[i]!=s2[i])
		{
			s1[i+1]=(s1[i+1]=='*'?'o':'*');
			count++;
		}
			
	}
	cout<<count;
	return 0;
 } 

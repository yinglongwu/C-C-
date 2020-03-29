#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int a=str.size();
	for(int i=0;i<a;i++)
	{
		if(str[i]>='a' &&str[i]<='z')
			str[i] -= 32;
		else if(str[i]>='A' &&str[i]<='Z')
			str[i] += 32;
	}
	for(int i=0;i<a;i++)
		cout<<str[i];
	return 0;	
} 

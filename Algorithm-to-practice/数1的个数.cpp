#include<iostream>
using namespace std;
#include<string>
#include<sstream>
#include<stdlib.h>
string i_s(int n) //intתstring���� 
{
	string s;
	stringstream ss;
	ss<<n;
	ss>>s;
	return s;
}
int main()
{
	int n;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++)
		s+=i_s(i);
	int book=0; //������¼ 1 �ĸ��� 
	int a=s.length();
	for(int i=0;i<a;i++)
	{
		if(s[i]=='1')
			book++;
	}
	cout<<book;
	return 0;
}

#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
#include<cmath>
#include<stdlib.h>

string i_s(int n)//int ×ª string 
{
	string s;
	stringstream ss;
	ss<<n;
	ss>>s;
	return s;
}

int main()
{
	for(double y=10;;y++)
	{
		double a=pow(y,3);
		double b=pow(y,4);
		if(a>=1000&&a<=9999&&b>=100000&&b<=999999)
		{
			int is=1;
			string aa=i_s((int)a);
			string bb=i_s((int)b);
			string s=aa+bb;
			sort(s.begin(),s.end());//ÅÅÐò  
			if(s!="0123456789")
			{
			//	cout<<s<<endl;
				is=0;
				continue;
			} 
			
			if(is)
			{
				cout<<y;
				break;
			}
		}
	}
	return 0;
}

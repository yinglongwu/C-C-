#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=s.size()-1;i>=0;i--)
    {
    	if(i==s.size()-1 && s[i]!='0')
    		cout<<s[i];
    	else if(i<s.size()-1)
    	{
    		if(s[i]!='0'||(s[i]=='0' && s[i+1]!='0'))
            cout<<s[i];
		}
    }
    return 0;
}

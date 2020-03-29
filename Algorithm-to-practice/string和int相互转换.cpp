#include<iostream>
using namespace std;
#include<string>
#include<sstream> //为了使用 stringstream ss
#include<stdlib.h>  //为了使用 c_str() 函数 

int s_i(string s)//string 转 int 
{
	return atoi( s.c_str() ); // s 为数组名 
}

string i_s(int n)//int 转 string string i_s(int n)//int 转 string 
{
	string s;
	stringstream ss;
	ss<<n;
	ss>>s;
	return s;
}

int main()
{
	string a="224";
	int num=123;
	
	cout<<s_i(a)/2<<endl;  //输出 112 
	
	string s=i_s(num);//此处注意接收返回的 s 
	cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<" "<<endl; //为了检测将 num 转换成了 string  
	
	return 0;
} 

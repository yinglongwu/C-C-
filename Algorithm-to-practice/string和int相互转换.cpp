#include<iostream>
using namespace std;
#include<string>
#include<sstream> //Ϊ��ʹ�� stringstream ss
#include<stdlib.h>  //Ϊ��ʹ�� c_str() ���� 

int s_i(string s)//string ת int 
{
	return atoi( s.c_str() ); // s Ϊ������ 
}

string i_s(int n)//int ת string string i_s(int n)//int ת string 
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
	
	cout<<s_i(a)/2<<endl;  //��� 112 
	
	string s=i_s(num);//�˴�ע����շ��ص� s 
	cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<" "<<endl; //Ϊ�˼�⽫ num ת������ string  
	
	return 0;
} 

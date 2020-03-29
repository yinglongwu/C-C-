#include<iostream>
using namespace std;
#include<set>
#include<cmath>
bool check(long long int n)
{
	set<long long int>s;  //�� set ���������ʮλ������Ҫ����set���Ԫ�ز����ظ����ص�
	if(n==0)
		return false;
	while(n)  //�� n ��=0 ʱִ��ѭ�� 
	{
		int d=n%10;  //�� n �ĸ�λ���� d 
		s.insert(d); //��� set ��û�� d ������ set �в��� d 
		n=n/10;  // �� n �ĸ�λ������ 
	}
	 return (s.size()==10); // ��Ϊ set ��û���ظ�Ԫ�أ����Ե� s ����10��Ԫ��ʱ����������Ŀ�������� true 
}
int main()
{
	for(long long int i=sqrt(9876543210);i>=sqrt(1026753849);i--) //ʹ�ÿ������Լ���ö�ٵ����� 
	{
		if(check(i*i))  //��� i*i ������Ŀ���� 
		{
			cout<<i*i<<endl;
			break;
		}
	}  
	return 0;
}

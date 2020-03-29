#include<iostream>
using namespace std;
#include<set>
#include<cmath>
bool check(long long int n)
{
	set<long long int>s;  //用 set 对象来存放十位数，主要利用set里的元素不会重复的特点
	if(n==0)
		return false;
	while(n)  //当 n ！=0 时执行循环 
	{
		int d=n%10;  //把 n 的个位数给 d 
		s.insert(d); //如果 set 中没有 d ，则向 set 中插入 d 
		n=n/10;  // 把 n 的个位数舍弃 
	}
	 return (s.size()==10); // 因为 set 中没有重复元素，所以当 s 中有10个元素时，则满足题目条件返回 true 
}
int main()
{
	for(long long int i=sqrt(9876543210);i>=sqrt(1026753849);i--) //使用开方可以减少枚举的数量 
	{
		if(check(i*i))  //如果 i*i 满足题目条件 
		{
			cout<<i*i<<endl;
			break;
		}
	}  
	return 0;
}

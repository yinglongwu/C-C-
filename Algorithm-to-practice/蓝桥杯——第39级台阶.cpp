#include<iostream>
using namespace std;
#include<algorithm>
int sum;
void fun(int stair,int step)
{
	//stari用于表示剩余的楼梯的层数，当等于0时停止递归
	//step是走过的步数，用来判断是否是偶数，是否符合要求
	if(stair<0)
		return;
	if(stair==0)  // 39 级台阶全部走完 
	{
		if(step%2==0)
			sum++;
		return;
	}
	fun(stair-1,step+1); //这一步走了一个台阶 
	fun(stair-2,step+1); //这一步走了两个台阶 
 } 
int main()
{
	fun(39,0);
	cout<<sum<<endl;
	return 0;
 } 

#include <iostream>
#include <string>
using namespace std;
int a,temp;//题目输入，临时变量
int Int = 0;//整数
int x,y;//分母分子
int b[10] = {1,0};//标记1-9是否被使用
int ans;//纪录答案个数

void dfs(int k,int maxd,int t)
{
	if(k > maxd)//如果枚举完毕
	{
		if(x % temp == 0)//分母能够整除剩余数值
		{
			int tmp[10];
			memcpy(tmp,b,sizeof(tmp));//保存之前的数字使用情况
			y = x / temp;//分子
			bool flag = true;
			int i = 0;
			while(y)
			{
				i++;
				if(b[y % 10] == 1)
				{
					flag = false;
					break;
				}
				b[y % 10] = 1;
				y /= 10;
			}//求分子的位数和验证分子的每一位都不重复
			if(flag && i + maxd == t)//满足条件
			{
				ans++;
				cout << Int << " + " << x << " / " << x / temp << endl;
			}
			memcpy(b,tmp,sizeof(b));//恢复验证分子时修改的值
		}
		//cout << x << "/" << temp << "=" << x/temp << endl;
		return;
	}

	for(int i = 1;i <= 9;i++)//递归获得分母每一位的数值
		if(b[i] == 0)
		{
			b[i] = 1;
			x = x * 10 + i;
			dfs(k + 1,maxd,t);
			x = (x - i) / 10;
			b[i] = 0;
		}
}

void float_dfs(int len,int q)//len 是剩余数值位数，q是整数位数，也是已经使用的数值位数
{
	if((9 - q + len) % 2 == 1)//根据剩余数值位数和整数位数选择分数的位数
	{
		int d = (9 - q + len - 1) / 2;
		dfs(1,d,9 - q);//枚举分母的每个位置
	}
	else
	{
		int d = (9 - q + len) / 2;
		dfs(1,d,9 - q);
	}
}

void int_dfs(int k,int maxd)
{
	for(int i = 1;i <= 9;i++)//选择当前位置上的数字
		if(b[i] == 0)
		{
			b[i] = 1;//标记该数字已经使用过
			Int = Int * 10 + i;
			if(k == maxd)//如果该整数所有位数已经凑齐
			{
				if(Int < a)//整数小于输入的数
				{
					temp = a - Int;//剩余数值
					int j = 0;
					while(temp)
					{
						j++;
						temp /= 10;
					}//求剩余数值的位数
					temp = a - Int;
					float_dfs(j,k);//递归枚举分数部分
				}
			}
			else
				int_dfs(k + 1,maxd);
			b[i] = 0;
			Int = (Int - i) / 10;
		}
}

int main()
{
	cin >> a;
	int i = 0;
	temp = a;
	while(temp)
	{
		i++;
		temp /= 10;
	}//得到输入数据的位数

	for(int d = 1;d <= i;d++)//枚举整数部分的位数
		int_dfs(1,d);//进入递归

	cout << ans << endl;
}

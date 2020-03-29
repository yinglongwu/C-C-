#include<iostream>
#include<algorithm>
#define MAX 101 
using namespace std;
int D[MAX][MAX];
int n;
int MaxSum(int i,int j)
{
	if(i==n)
		return D[i][j];  //如果这是数字三角形的最后一行，则直接返回其值 
		
	int x=MaxSum(i+1,j);
	int y=MaxSum(i+1,j+1);
	
	return max(x,y)+D[i][j];  // max() 是 <algorithm> 中的函数，返回最大值 
}

int main()
{
	int i,j;
	cin>>n;  // 三角形有 n 行 
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
			cin>>D[i][j];
			
	cout<<MaxSum(1,1)<<endl;
} 

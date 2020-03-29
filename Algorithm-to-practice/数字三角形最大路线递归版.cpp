#include<iostream>
#include<algorithm>
#define MAX 101 
using namespace std;
int D[MAX][MAX];
int n;
int MaxSum(int i,int j)
{
	if(i==n)
		return D[i][j];  //����������������ε����һ�У���ֱ�ӷ�����ֵ 
		
	int x=MaxSum(i+1,j);
	int y=MaxSum(i+1,j+1);
	
	return max(x,y)+D[i][j];  // max() �� <algorithm> �еĺ������������ֵ 
}

int main()
{
	int i,j;
	cin>>n;  // �������� n �� 
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
			cin>>D[i][j];
			
	cout<<MaxSum(1,1)<<endl;
} 

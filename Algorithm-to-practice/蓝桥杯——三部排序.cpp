#include<iostream>
using namespace std;
void sort3p(int* x, int len)
{
	int p = 0;
	int left = 0;
	int right = len-1;
	
	while(p<=right){
		if(x[p]<0){
			int t = x[left];
			x[left] = x[p];
			x[p] = t;
			left++;
			p++;
		}
		else if(x[p]>0){
			int t = x[right];
			x[right] = x[p];
			x[p] = t;
			right--;			
		}
		else
		{
			p++;
		}

	}
	
}
int main()
{
	int s[14]={25,18,-2,0,16,-5,33,21,0,19,-16,25,-3,0};
	sort3p(s,14);
	for(int i=0;i<=14;i++)
		cout<<s[i]<<" ";
	return 0;
} 


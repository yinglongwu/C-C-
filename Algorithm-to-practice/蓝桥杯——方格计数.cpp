#include<iostream>
using namespace std;
bool check(int x,int y)
{
	return x*x+y*y<=1000*1000;	
}
int main() 
{
	int count=0;
	int x=1000,y=1000;
	
	for(int x=1;x<=1000;x++)
		for(int y=1;y<=1000;y++)
			if(check(x,y))
				count++;
				
	cout<<count*4;
}

#include<iostream>
using namespace std;
#include<string>
#include<stdlib.h>  //为了使用 c_str() 函数 
char s[10],s1[10],s2[10],s3[10],s4[10];
int book=0; //用于计数
int s_i(string s) //该函数用于把 string 型转换成 int 型 
{
	return atoi(s.c_str()); 
}
int main()
{
	int chongfu=0; //用来标记是否重复 
	for(int a=1;a<=9;a++)
		for(int b=1;b<=9;b++)
			for(int c=1;c<=9;c++)
				for(int d=1;d<=9;d++)
					for(int e=1;e<=9;e++)
					{
						chongfu=0;
						sprintf(s,"%d%d%d%d%d",a,b,c,d,e); //把 a b c d e存入 s 中 
						
						for(int i=0;i<4;i++) //数组元素查重，这是我自己想的方法，嘻嘻 
							for(int j=i+1;j<5;j++)
							{
								if(s[i]==s[j])
								{
									chongfu=1;  //数组中有元素重复 
									break;  //立即跳出循环 
								}
							}
							
						if(chongfu==0) //如果不重复 
						{
							int A,B,C,D;
							sprintf(s1,"%d%d",a,b);     //把 a b  存入 s1 中 
							sprintf(s2,"%d%d%d",c,d,e);	//把 c d e存入 s2 中 
							sprintf(s3,"%d%d%d",a,d,b); //把 a d b存入 s3 中 
							sprintf(s4,"%d%d",c,e);     //把 c e  存入 s4 中 
							A=s_i(s1);B=s_i(s2);C=s_i(s3);D=s_i(s4); //把 string 型转为 int 型 
							if(A*B==C*D) //如果符合题目条件 
								book++;  //计数器加一 
						}
					}
	cout<<book;
	return 0;
}

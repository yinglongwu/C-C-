#include<iostream>
using namespace std;
#include<string>
#include<stdlib.h>  //Ϊ��ʹ�� c_str() ���� 
char s[10],s1[10],s2[10],s3[10],s4[10];
int book=0; //���ڼ���
int s_i(string s) //�ú������ڰ� string ��ת���� int �� 
{
	return atoi(s.c_str()); 
}
int main()
{
	int chongfu=0; //��������Ƿ��ظ� 
	for(int a=1;a<=9;a++)
		for(int b=1;b<=9;b++)
			for(int c=1;c<=9;c++)
				for(int d=1;d<=9;d++)
					for(int e=1;e<=9;e++)
					{
						chongfu=0;
						sprintf(s,"%d%d%d%d%d",a,b,c,d,e); //�� a b c d e���� s �� 
						
						for(int i=0;i<4;i++) //����Ԫ�ز��أ��������Լ���ķ��������� 
							for(int j=i+1;j<5;j++)
							{
								if(s[i]==s[j])
								{
									chongfu=1;  //��������Ԫ���ظ� 
									break;  //��������ѭ�� 
								}
							}
							
						if(chongfu==0) //������ظ� 
						{
							int A,B,C,D;
							sprintf(s1,"%d%d",a,b);     //�� a b  ���� s1 �� 
							sprintf(s2,"%d%d%d",c,d,e);	//�� c d e���� s2 �� 
							sprintf(s3,"%d%d%d",a,d,b); //�� a d b���� s3 �� 
							sprintf(s4,"%d%d",c,e);     //�� c e  ���� s4 �� 
							A=s_i(s1);B=s_i(s2);C=s_i(s3);D=s_i(s4); //�� string ��תΪ int �� 
							if(A*B==C*D) //���������Ŀ���� 
								book++;  //��������һ 
						}
					}
	cout<<book;
	return 0;
}

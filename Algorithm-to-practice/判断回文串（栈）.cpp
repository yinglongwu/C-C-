#include<stdio.h>
#include<string.h> 
int main()
{
	char a[101],s[101];
	int i,len,mid,next,top;
	
	gets(a); //����һ���ַ��� 
	len=strlen(a); //���ַ����ĳ��� 
	mid=len/2-1; //���ַ������е�
	 
	//ջ���� 
	top=0; //ջ�ĳ�ʼ��
	//�� mid ǰ���ַ�������ջ 
	for(i=0;i<=mid;i++)
		s[++top]=a[i]; //������ַ���ʱ���Ǵ� s[1] ��ʼ�õ� 
	
	//�ж��ַ����ĳ�������������ż�������ҳ���Ҫ�����ַ�ƥ�����ʼ�±� 
	if(len%2==0)
		next=mid+1;
	else
		next=mid+2;
		
	//��ʼƥ�� 
	for(i=next;i<=len-1;i++)
	{
		if(a[i]!=s[top])
			break;
		top--;
	}
	
	//��� top ��ֵΪ 0 ����˵��ջ�����е����ֶ���һһƥ���� 
	if(top==0)
		printf("YES");
	else
		printf("NO");
		
	getchar();
	return 0;
}

#include<stdio.h>
struct queue
{
	int data[100]; //���е������������� 
	int head; //���� 
	int tail; //��β 
};

int main()
{
	struct queue q;
	int i;
	//��ʼ����
	q.head=1;
	q.tail=1;
	
	printf("������ 9 �������ж��н��ܣ�\n"); 
	for(i=1;i<=9;i++)
	{
		//��������в��� 9 ����
		scanf("%d",&q.data[q.tail]);
		q.tail++; 	
	 } 
	
	while(q.head<q.tail) //�����в�Ϊ�յ�ʱ��ִ��ѭ�� 
	{
		//��ӡ���ײ������׳���
		printf("%d ",q.data[q.head]);
		q.head++;
		
		//�Ƚ��¶��׵����������β 
		q.data[q.tail ]=q.data [q.head ];
		q.tail ++;
		//�ٽ����׳��� 
		q.head ++;
	 } 
	
	getchar();
	return 0;
 } 


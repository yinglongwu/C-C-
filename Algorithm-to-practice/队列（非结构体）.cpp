#include<stdio.h>
int main()
{
	int q[102]={0,6,3,1,7,5,8,9,2,4},head,tail;
	//这个 0 是多写的，用来填充 q[0] 该程序中数组从 q[1] 开始使用 
	int i;
	//初始化队列
	head=1;  //head用来记录队列的队首 
	tail=10; //队列中已经有9个元素了，tail用来记录队尾的下一个位置 
	
	while(head<tail)  //当队列不为空的时候执行循环 
	{
		//打印队首并将队首出队
		printf("%d ",q[head]);
		head++;
		
		//先将队首的数添加到队尾
		q[tail]=q[head];
		tail++;
		//再将队首移出队
		head++; 
	 } 
	
	getchar();
	return 0;
 } 

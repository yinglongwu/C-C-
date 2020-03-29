#include<stdio.h>
int a[101],n;  //����ȫ�ֱ�����������������Ҫ���Ӻ�����ʹ��  
//�� a[101] ��ӦΪ���������Ϊ�˷������� a[0] ʡ�Բ����� ��ֱ�Ӵ� a[1] ��ʼ�õ�                                                                          

void quicksort(int left,int right)  //������������� 
{
	int i,j,t,temp;
	if(left>right)
		return;
	
	temp=a[left]; //temp���ڴ洢��׼�� 
	i=left;
	j=right;
	while(i!=j)  //���ڱ� i ���ڱ� j û����ʱ 
	{
		while(a[j]>=temp && i<j)  //˳�����Ҫ���ȴ��������� 
			j--;
		while(a[i]<=temp && i<j)  //�ٴ��������� 
			i++;	
		
		if(i<j)  //���if��������ûʲô�ã�ǰ�� whileѭ���оͰ����� i<j
		{            //���ڱ� i �� j û������ʱ�����������ڱ����ֵ�����λ��4
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	
	a[left]=a[i]; //��һ���������� while ѭ������������ i=j ���� 
	a[i]=temp;    //�����ڱ������������ǽ��µ��������׼�������� 
	
	quicksort(left,i-1);  //�ݹ飬ԭ����һ��������׼����Ϊ�������֣���벿�� 
	quicksort(i+1,right); //���Ұ벿�ּ����Ը��Եĵ�һ����Ϊ��׼�����п������� 
} 

int main()
{
	int i,j,t;
	printf("������Ҫ�Լ��������п������򣨱��������֧��100������\n"); 
	scanf("%d",&n);
	printf("��������Ҫ��������� %d ������\n",n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		
	quicksort(1,n);
	
	printf("����Ľ��Ϊ��\n");
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
		
	getchar(); 
	return 0;
}

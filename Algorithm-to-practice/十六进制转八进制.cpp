#include<stdio.h>
#include<string.h>
int t,k,r,flag,i;
char a[400005];
int b[400005],c[400005];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        k=0;
        flag=0;
        scanf("%s",a);//���ַ�������ʽ��16��������
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));

        for(i=strlen(a)-1; i>=0; i--)
        {
            if(a[i]-'0'<10)
                r=a[i]-'0';
            if(a[i]>='A'&&a[i]<='F')
                r=a[i]-'A'+10;
            b[k]=r%2;//ת��Ϊ2����
            b[k+1]=r/2%2;
            b[k+2]=r/4%2;
            b[k+3]=r/8%2;
            k+=4;
        }

        for(i=0; i<k; i+=3)//2���Ʊ�Ϊ8����
            c[i/3]=b[i]*1+b[i+1]*2+b[i+2]*4;

        for(i=k/3; i>=0; i--)
        {
            if(flag==0&&c[i]==0)//�����һ��������0�Ļ����������,û����һ���Ļ��ͻ����WA
                continue;
            flag=1;
            printf("%d",c[i]);
        }
        printf("\n");
    }

    return 0;

}














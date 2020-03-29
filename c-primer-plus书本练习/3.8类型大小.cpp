//typesize.c--打印类型大小 
#include<stdio.h>
int main(void)
{
	/*C99为类型大小提供%zd转换说明*/
	printf("Type int has a size of %u bytes.\n",sizeof(int));
	printf("Type char has a size of %u bytes.\n",sizeof(char));
	printf("Type long has a size of %lu bytes.\n",sizeof(long));
	printf("Type long long has a size of %lu bytes.\n",
			sizeof(long long));//该处被分为两行，只要不是在引号内部或单词中断都可以这样写
	printf("Type double has a size of %u bytes.\n",sizeof(double));
	printf("Type long double has a size of %u bytes.\n", 
			sizeof(long double));
	return 0;	
 } 

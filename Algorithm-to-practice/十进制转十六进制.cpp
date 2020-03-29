#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;                  //输入的十进制数
    int i;
    int index = 0;          //记录输入的十进制数的长度
    int len = 0;            //记录十六进制数组的长度
    int remainder[200];     //存储余数
    char sixteen[200];      //存储转换后的十六进制数
    scanf("%d",&n);
    if(n == 0)
    {
        remainder[0] = 0;
        index++;
    }
    else
    {
        for(i = 0; n > 0; i++)
        {
            remainder[i] = n % 16;
            n /= 16;
            index++;
        }
    }
    for(i = index - 1; i >= 0; i--)
    {
        switch(remainder[i])
        {
            case 0:
                sixteen[len++] = '0';
            break;
            case 1:
                sixteen[len++] = '1';
                break;
            case 2:
                sixteen[len++] = '2';
                break;
            case 3:
                sixteen[len++] = '3';
                break;
            case 4:
                sixteen[len++] = '4';
                break;
            case 5:
                sixteen[len++] = '5';
                break;
            case 6:
                sixteen[len++] = '6';
                break;
            case 7:
                sixteen[len++] = '7';
                break;
            case 8:
                sixteen[len++] = '8';
                break;
            case 9:
                sixteen[len++] = '9';
                break;
            case 10:
                sixteen[len++] = 'A';
                break;
            case 11:
                sixteen[len++] = 'B';
                break;
            case 12:
                sixteen[len++] = 'C';
                break;
            case 13:
                sixteen[len++] = 'D';
                break;
            case 14:
                sixteen[len++] = 'E';
                break;
            case 15:
                sixteen[len++] = 'F';
                break;
        }
    }
    for(i = 0; i < len; i++)
    {
        printf("%c",sixteen[i]);
    }
    printf("\n");
    return 0;
}


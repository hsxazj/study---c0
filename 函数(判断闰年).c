#include<stdio.h>


void fuck(int x)
{
    if((x%400 == 0)||((x%4 == 0)&&(x%100 != 0)))
    {
        printf("这一年是闰年");
    }
    else
    {
        printf("这一年不是闰年");
    }
}


int main()
{
    int year;
    printf("请输入年份\n");
    scanf("%d",&year);
    fuck(year);
    return 0;
}
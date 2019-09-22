#include<stdio.h>

int cube(int num);

int main()
{
    int num;


    printf("enter any number:");
    scanf("%d",&num);

    cube(num);
    printf("%d ",cube(num));
    return 0;
}
int cube(int num)
{
    return (num * num * num);
}

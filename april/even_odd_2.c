#include<stdio.h>
int main()
{
    int i,n;
    printf("numbers n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
         printf("even number is:%d\n",i);
        }

       else
       {
         printf("odd number is:%d\n",i);
       }
    }
    return 0;
}
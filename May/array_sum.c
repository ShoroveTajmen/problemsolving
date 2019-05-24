#include<stdio.h>
int main()
{
 int n, sum = 0, c, value;
 printf("how many integers you want add?\n");
 scanf("%d",&n);
 printf("enter %d integers\n",n);
 for(c = 1; c<=n; c++){
    scanf("%d",&value);
    sum = sum + value;
 }
 printf("sum of the integers = %d\n",sum);
 return 0;
}
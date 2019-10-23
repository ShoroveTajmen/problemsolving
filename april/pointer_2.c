#include<stdio.h>
int main()
{
    int num = 1;
    int *ptr = &num;

    printf("value of num = %d\n",num);
    printf("address of num = %d\n",&num);

    printf("value of ptr = %d\n",ptr);
    printf("address of ptr = %d\n",&ptr);
    printf("value pointed by ptr = %d\n",*ptr);

    num = 10;
    printf("after changing value of num : \n");
    printf("value of num = %d\n",num);
    printf("value pointed by ptr = %d\n",*ptr);

    *ptr = 100;
    printf("after changing value pointed by ptr : \n");
    printf("value of num = %d\n",num);
    printf("value pointed by ptr = %d\n",*ptr);

    return 0;
}
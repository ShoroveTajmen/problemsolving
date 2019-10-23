#include<stdio.h>
int main()
{
    int num = 10;
    printf("value of num = %d\n",num);
    printf("address of num = %d\n",&num);
    printf("value of num = %d\n",*(&num));
    return 0;
}

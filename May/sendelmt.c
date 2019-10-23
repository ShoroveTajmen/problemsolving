#include<stdio.h>
int func_elmnt(int val_1, int val_2);
int main()
{
    int x,romi[5] = {5,6,7,8};
    x = func_elmnt(romi[1],romi[3]);
    printf("\n return value is : %d", x);
    return 0;
}
int func_elmnt(int val_1, int val_2)
{
    int y;
    y = val_1 + val_2;
    return y;
}
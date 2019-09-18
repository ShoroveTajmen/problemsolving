#include<stdio.h>
void num(int n);
int main()
{
    num(10);


}
void num(int n)
{
    if(n>=1)

    {
        num(n-1);
        printf("%d\n",n);
    }
}

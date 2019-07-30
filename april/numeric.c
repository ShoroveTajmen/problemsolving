#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i = 0; i <= n; i++)
    {
        char str[100];
        gets(str);
        int j = 0;
        while(str[j]!='\0')
        {
            if(str[j] >= 'A' && str[j] <= 'Z')
                printf("%d",str[j]-64);
                j++;
        }
    }


}